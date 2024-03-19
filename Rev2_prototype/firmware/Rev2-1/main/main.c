#include <stdio.h>
#include "sdkconfig.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

#include "esp_timer.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "driver/i2c.h"

#include "servo.h"
#include "MLX90614.h"
#include "esp_http_client_task.h"
#include "BMP280.h"
#include "BMP2/bmp2.h"

#include <unistd.h>
#include <string.h>

#include "esp_err.h"
#include "esp_event.h"
#include "esp_sleep.h"
#include "esp_pm.h"
#include "esp_netif.h"
#include "esp_netif_types.h"
#include "esp_openthread.h"
#include "esp_openthread_cli.h"
#include "esp_openthread_lock.h"
#include "esp_openthread_netif_glue.h"
#include "esp_openthread_types.h"
#include "esp_ot_config.h"
#include "esp_vfs_eventfd.h"
#include "driver/uart.h"
#include "hal/uart_types.h"
#include "nvs_flash.h"
#include "openthread/cli.h"
#include "openthread/instance.h"
#include "openthread/logging.h"
#include "openthread/tasklet.h"
#include "esp_task_wdt.h"

#define TAG "ot_esp_power_save"
#define CONFIG_OPENTHREAD_NETWORK_POLLPERIOD_TIME 30000

static esp_pm_lock_handle_t s_cli_pm_lock = NULL;

#if CONFIG_OPENTHREAD_AUTO_START
static void create_config_network(otInstance *instance)
{
    otLinkModeConfig linkMode = { 0 };

    linkMode.mRxOnWhenIdle = false;
    linkMode.mDeviceType = false;
    linkMode.mNetworkData = false;

    if (otLinkSetPollPeriod(instance, CONFIG_OPENTHREAD_NETWORK_POLLPERIOD_TIME) != OT_ERROR_NONE) {
        ESP_LOGE(TAG, "Failed to set OpenThread pollperiod.");
        abort();
    }

    if (otThreadSetLinkMode(instance, linkMode) != OT_ERROR_NONE) {
        ESP_LOGE(TAG, "Failed to set OpenThread linkmode.");
        abort();
    }

    otOperationalDatasetTlvs dataset;
    otError error = otDatasetGetActiveTlvs(esp_openthread_get_instance(), &dataset);
    ESP_ERROR_CHECK(esp_openthread_auto_start((error == OT_ERROR_NONE) ? &dataset : NULL));
}
#endif // CONFIG_OPENTHREAD_AUTO_START


static esp_err_t esp_openthread_sleep_device_init(void)
{
    esp_err_t ret = ESP_OK;

    ret = esp_pm_lock_create(ESP_PM_CPU_FREQ_MAX, 0, "otcli", &s_cli_pm_lock);
    if (ret == ESP_OK) {
        esp_pm_lock_acquire(s_cli_pm_lock);
        ESP_LOGI(TAG, "Successfully created CLI pm lock");
    } else {
        if (s_cli_pm_lock != NULL) {
            esp_pm_lock_delete(s_cli_pm_lock);
            s_cli_pm_lock = NULL;
        }
        ESP_LOGI(TAG, " Failed to create CLI pm lock");
    }
    return ret;
}

static void process_state_change(otChangedFlags flags, void* context)
{
    otDeviceRole ot_device_role = otThreadGetDeviceRole(esp_openthread_get_instance());
    if(ot_device_role == OT_DEVICE_ROLE_CHILD) {
        if (s_cli_pm_lock != NULL) {
            esp_pm_lock_release(s_cli_pm_lock);
            esp_pm_lock_delete(s_cli_pm_lock);
            s_cli_pm_lock = NULL;
        }
    }
}

static esp_netif_t *init_openthread_netif(const esp_openthread_platform_config_t *config)
{
    esp_netif_config_t cfg = ESP_NETIF_DEFAULT_OPENTHREAD();
    esp_netif_t *netif = esp_netif_new(&cfg);
    assert(netif != NULL);
    ESP_ERROR_CHECK(esp_netif_attach(netif, esp_openthread_netif_glue_init(config)));

    return netif;
}


static void ot_task_worker(void *aContext)
{
    otError ret;
    esp_openthread_platform_config_t config = {
        .radio_config = ESP_OPENTHREAD_DEFAULT_RADIO_CONFIG(),
        .host_config = ESP_OPENTHREAD_DEFAULT_HOST_CONFIG(),
        .port_config = ESP_OPENTHREAD_DEFAULT_PORT_CONFIG(),
    };

    // Initialize the OpenThread stack
    ESP_ERROR_CHECK(esp_openthread_init(&config));

    esp_openthread_lock_acquire(portMAX_DELAY);
    ret = otSetStateChangedCallback(esp_openthread_get_instance(), process_state_change, esp_openthread_get_instance());
    esp_openthread_lock_release();
    if(ret != OT_ERROR_NONE) {
        ESP_LOGE(TAG, "Failed to set state changed callback");
    }
    // The OpenThread log level directly matches ESP log level
    (void)otLoggingSetLevel(CONFIG_LOG_DEFAULT_LEVEL);

    // Initialize the esp_netif bindings
    esp_netif_t *openthread_netif;
    openthread_netif = init_openthread_netif(&config);
    esp_netif_set_default_netif(openthread_netif);
    create_config_network(esp_openthread_get_instance());

    // Run the main loop
    esp_openthread_launch_mainloop();

    // Clean up
    esp_openthread_netif_glue_deinit();
    esp_netif_destroy(openthread_netif);

    esp_vfs_eventfd_unregister();
    vTaskDelete(NULL);
}





static volatile uint32_t gpio_num;
static esp_timer_handle_t debounce_timer = NULL;
static esp_timer_handle_t pressure_timer = NULL;

static void IRAM_ATTR gpio_isr_handler(void* arg)
{
    gpio_num = (uint32_t) arg;
    if (esp_timer_start_once(debounce_timer, CONFIG_DEBOUNCE_INTERVAL) == ESP_ERR_INVALID_STATE) {
        esp_timer_restart(debounce_timer, CONFIG_DEBOUNCE_INTERVAL);
    }
}

void debounce_timer_callback(void* arg) {
    
    int level = gpio_get_level(gpio_num);
    ESP_LOGI("BUTTON", "gpio_num: %lu, level: %d", gpio_num, level);

    if (level == 1) {
        switch (gpio_num)
        {
        case CONFIG_GPIO_CLOSE_BUTTON:
            ESP_LOGI("SERVO", "Servo max percent");
            set_servo(SERVO_MIN_PERCENT);
            break;
        case CONFIG_GPIO_OPEN_BUTTON:
            ESP_LOGI("SERVO", "Servo min percent");
            set_servo(SERVO_MAX_PERCENT);
            break;
        default:
            break;
        } 
    }

}

struct bmp2_dev bmp280;
struct bmp2_config conf;

// static void temperature_poll_task(void* arg) {
//     uint16_t output = 0;
//     while (true) {
//         MLX_read_word(I2C_NUM_0, (MLX90614_RAM_ACCESS_MASK & MLX90614_RAM_OBJECT1_TEMP), &output);
//         ESP_LOGI("MLX90614", "Temp: %f, success: %s", convert_to_degC(output), (MLX_output_error(output) == ESP_OK) ? "true" : "false");

//         // ESP_LOGI("PRES", "Temp: %f, Pressure: %f", readTemperature(I2C_NUM_0), readPressure(I2C_NUM_0));
//         vTaskDelay(5000 / portTICK_PERIOD_MS);
//     }
// }

// static void pressure_poll_task(void* arg) {
    
//     uint32_t meas_time;

//     while (true) {
//         if (!esp_timer_is_active(pressure_timer)) {
//             bmp2_set_power_mode(BMP2_POWERMODE_FORCED, &conf, &bmp280);
//             bmp2_compute_meas_time(&meas_time, &conf, &bmp280);

//             esp_timer_start_once(pressure_timer, (uint64_t)meas_time + 1);
            
//             vTaskDelay(5000 / portTICK_PERIOD_MS);
//         }
//     }
// }

void pressure_timer_callback(void* arg) {
    struct bmp2_status status;
    struct bmp2_data comp_data;

    bmp2_get_status(&status, &bmp280);
    if (status.measuring) {
        ESP_LOGE("BMP280", "Measurement not completed");
    } else {
        int8_t success = bmp2_get_sensor_data(&comp_data, &bmp280);
        ESP_LOGI("BMP280", "Pressure: %lf, Temp: %lf, success: %s",
                    comp_data.pressure,
                    comp_data.temperature,
                    (success == 0) ? "true" : "false");
    }

}

static void main_loop(void *arg) {

    uint16_t ir_output = 15000U;
    int servo_rotation_result = 0;
    
    // It might be possible to avoid manually entering sleep states
    uint32_t meas_time;
    TickType_t wake_time = xTaskGetTickCount();
    while (true) {

        // Perform Measurements 
        MLX_read_word(I2C_NUM_0, (MLX90614_RAM_ACCESS_MASK & MLX90614_RAM_OBJECT1_TEMP), &ir_output);
        ESP_LOGI("MLX90614", "Temp: %f, success: %s", convert_to_degC(ir_output), (MLX_output_error(ir_output) == ESP_OK) ? "true" : "false");

        if (!esp_timer_is_active(pressure_timer)) {
            bmp2_set_power_mode(BMP2_POWERMODE_FORCED, &conf, &bmp280);
            bmp2_compute_meas_time(&meas_time, &conf, &bmp280);

            esp_timer_start_once(pressure_timer, (uint64_t)meas_time + 1);
        }
        // TODO: retreive pressure measurement
     

        servo_rotation_result = perform_http_transactions(50.0, convert_to_degC(ir_output));

        if (servo_rotation_result < 0) {
            ESP_LOGE("SERVO", "No data from network, not moving servo");
        } else {
            ESP_LOGI("SERVO", "Moving vent to %d", servo_rotation_result);
            set_servo(servo_rotation_result);
        }
        xTaskDelayUntil(&wake_time, 1000 / portTICK_PERIOD_MS);
    }
}

void app_main(void)
{
    // Setup debounce timer for pushbuttons
    const esp_timer_create_args_t debounce_timer_args = {
        .callback = &debounce_timer_callback,
        .name = "Debounce"
    };
    ESP_ERROR_CHECK(esp_timer_create(&debounce_timer_args, &debounce_timer));
    
    // Setup GPIOs & ISRs for pushbuttons
    ESP_ERROR_CHECK(gpio_install_isr_service(ESP_INTR_FLAG_LEVEL1));

    const gpio_config_t open_push_button_config = {
        .intr_type = GPIO_INTR_NEGEDGE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = 1ULL<<CONFIG_GPIO_OPEN_BUTTON
    };
    ESP_ERROR_CHECK(gpio_config(&open_push_button_config));
    ESP_ERROR_CHECK(gpio_isr_handler_add(CONFIG_GPIO_OPEN_BUTTON, gpio_isr_handler, (void*) CONFIG_GPIO_OPEN_BUTTON));

    const gpio_config_t close_push_button_config = {
        .intr_type = GPIO_INTR_NEGEDGE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = 1ULL<<CONFIG_GPIO_CLOSE_BUTTON
    };
    ESP_ERROR_CHECK(gpio_config(&close_push_button_config));
    ESP_ERROR_CHECK(gpio_isr_handler_add(CONFIG_GPIO_CLOSE_BUTTON, gpio_isr_handler, (void*) CONFIG_GPIO_CLOSE_BUTTON));
    
    // Setup I2C for Temp & Pressure sensors
    const i2c_config_t ir_temp_sensor_config = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = 6,
        .scl_io_num = 7,
        .sda_pullup_en = GPIO_PULLUP_ENABLE,
        .scl_pullup_en = GPIO_PULLUP_ENABLE,
        .master.clk_speed = 100000,
    };
    ESP_ERROR_CHECK(i2c_param_config(I2C_NUM_0, &ir_temp_sensor_config));
    ESP_ERROR_CHECK(i2c_driver_install(I2C_NUM_0, ir_temp_sensor_config.mode, 0, 0, ESP_INTR_FLAG_LEVEL1));

    // xTaskCreate(temperature_poll_task, "temperature_poll_task", 2048, NULL, 10, NULL);

    // Setup pressure measurement delay timer callback 
    const esp_timer_create_args_t pressure_timer_args = {
        .callback = &pressure_timer_callback,
        .name = "Pressure"
    };
    ESP_ERROR_CHECK(esp_timer_create(&pressure_timer_args, &pressure_timer));
    
    // Initialize pressure sensor driver
    uint8_t* addr = malloc(sizeof(uint8_t));
    *addr = BMP2_I2C_ADDR_SEC;
    bmp280.read = bmp2_i2c_read;
    bmp280.write = bmp2_i2c_write;
    bmp280.intf = BMP2_I2C_INTF;
    bmp280.intf_ptr = addr;
    bmp280.delay_us = bmp2_delay_us;

    bmp2_init(&bmp280);
    bmp2_get_config(&conf, &bmp280);
    conf.filter = BMP2_FILTER_OFF;
    conf.os_mode = BMP2_OS_MODE_ULTRA_LOW_POWER;
    conf.odr = BMP2_ODR_4000_MS;
    bmp2_set_config(&conf, &bmp280);
    
    // xTaskCreate(pressure_poll_task, "pressure_poll_task", 2048, NULL, 10, NULL);

    // Setup Servo
    const mcpwm_timer_config_t servo_timer_config = {
        .group_id = 0,
        .clk_src = MCPWM_TIMER_CLK_SRC_DEFAULT,
        .resolution_hz = SERVO_TIMEBASE_RESOLUTION_HZ,
        .period_ticks = SERVO_TIMEBASE_PERIOD,
        .count_mode = MCPWM_TIMER_COUNT_MODE_UP,
    };
    const mcpwm_operator_config_t servo_operator_config = {
        .group_id = 0, // operator must be in the same group to the timer
    };
    const mcpwm_comparator_config_t servo_comparator_config = {
        .flags.update_cmp_on_tez = true,
    };
    mcpwm_generator_config_t servo_generator_config = {
        .gen_gpio_num = SERVO_PULSE_GPIO,
    };
    ESP_ERROR_CHECK(init_servo(servo_timer_config, servo_operator_config, servo_comparator_config, servo_generator_config));

    // Setup Thread network & HTTP requests
    esp_vfs_eventfd_config_t eventfd_config = {
        .max_fds = 3,
    };

    // Setup power management
    ESP_ERROR_CHECK(gpio_wakeup_enable(CONFIG_GPIO_CLOSE_BUTTON, GPIO_INTR_LOW_LEVEL));
    ESP_ERROR_CHECK(gpio_wakeup_enable(CONFIG_GPIO_OPEN_BUTTON, GPIO_INTR_LOW_LEVEL));
    ESP_ERROR_CHECK(esp_sleep_enable_gpio_wakeup());
    
    int cur_cpu_freq_mhz = CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ;
    esp_pm_config_t pm_config = {
        .max_freq_mhz = cur_cpu_freq_mhz,
        .min_freq_mhz = cur_cpu_freq_mhz,
        .light_sleep_enable = true
    };
    // ESP_ERROR_CHECK(esp_pm_configure(&pm_config));

    // Setup OpenThread and networking
    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_vfs_eventfd_register(&eventfd_config));    
    ESP_ERROR_CHECK(esp_openthread_sleep_device_init());

    xTaskCreate(ot_task_worker, "ot_power_save_main", 4096, NULL, 5, NULL);  
    
    xTaskCreate(main_loop, "main_loop", 8192, NULL, 5, NULL);
}

// potentially enable:
//      CONFIG_ESP_SLEEP_POWER_DOWN_FLASH
//      CONFIG_PM_POWER_DOWN_PERIPHERAL_IN_LIGHT_SLEEP - Need to use ESP_PM_NO_LIGHT_SLEEP lock when the MCPWM or I2S
//      CONFIG_FREERTOS_HZ=1000 - Can be increased, which might improve performance?
//      Interrupt and task watchdogs
//      ECJPAKE options?
// potentially disable: 
//      CONFIG_LWIP_ND6 and other LWIP options?
//      DHCPS?

// CONFIG_ESP_SLEEP_POWER_DOWN_FLASH only works if the only wakeup source is timer. If we are okay with this, we can use
//      this config option to reduce power usage. Otherwise, we shouldn't do this (its like 5uA).
