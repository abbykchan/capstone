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
#include "BMP280.h"
#include "BMP2/bmp2.h"

#include <unistd.h>
#include <string.h>

#include "esp_err.h"
#include "esp_event.h"
#include "esp_sleep.h"
#include "esp_pm.h"
#include "esp_log.h"
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

#include "esp_http_client_task.h"

#if CONFIG_OPENTHREAD_CLI_ESP_EXTENSION
#include "esp_ot_cli_extension.h"
#endif // CONFIG_OPENTHREAD_CLI_ESP_EXTENSION

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
    // button_args* args = (button_args*) arg;
    int level = gpio_get_level(gpio_num);
    ESP_LOGI("BUTTON", "gpio_num: %lu, level: %d", gpio_num, level);

    if (level == 0) {
        switch (gpio_num)
        {
        case CONFIG_GPIO_CLOSE_BUTTON:
            set_servo_angle(SERVO_MIN_DEGREE);
            break;
        case CONFIG_GPIO_OPEN_BUTTON:
            set_servo_angle(SERVO_MAX_DEGREE);
            break;
        default:
            break;
        } 
    }

}

struct bmp2_dev bmp280;
struct bmp2_config conf;

static void temperature_poll_task(void* arg) {
    uint16_t output = 0;
    while (true) {
        MLX_read_word(I2C_NUM_0, (MLX90614_RAM_ACCESS_MASK & MLX90614_RAM_OBJECT1_TEMP), &output);
        ESP_LOGI("MLX90614", "Temp: %f, success: %s", convert_to_degC(output), (MLX_output_error(output) == ESP_OK) ? "true" : "false");

        // ESP_LOGI("PRES", "Temp: %f, Pressure: %f", readTemperature(I2C_NUM_0), readPressure(I2C_NUM_0));
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}

static void pressure_poll_task(void* arg) {
    
    uint32_t meas_time;

    while (true) {
        if (!esp_timer_is_active(pressure_timer)) {
            bmp2_set_power_mode(BMP2_POWERMODE_FORCED, &conf, &bmp280);
            bmp2_compute_meas_time(&meas_time, &conf, &bmp280);

            esp_timer_start_once(pressure_timer, (uint64_t)meas_time + 1);
            
            vTaskDelay(5000 / portTICK_PERIOD_MS);
        }
    }
}

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

static esp_netif_t *init_openthread_netif(const esp_openthread_platform_config_t *config)
{
    esp_netif_config_t cfg = ESP_NETIF_DEFAULT_OPENTHREAD();
    esp_netif_t *netif = esp_netif_new(&cfg);
    assert(netif != NULL);
    ESP_ERROR_CHECK(esp_netif_attach(netif, esp_openthread_netif_glue_init(config)));

    return netif;
}
static void start_openthread(void* arg) {
    esp_openthread_launch_mainloop();
}

static void main_loop(void *arg) {

    uint16_t ir_output = 0;
    int prev_servo_rotation_result = 0;
    int servo_rotation_result = 0;
    set_servo_angle(prev_servo_rotation_result);
    

    // It might be possible to avoid manually entering sleep states
    while (true) {
        // Perform Measurements 
        MLX_read_word(I2C_NUM_0, (MLX90614_RAM_ACCESS_MASK & MLX90614_RAM_OBJECT1_TEMP), &ir_output);
        ESP_LOGI("MLX90614", "Temp: %f, success: %s", convert_to_degC(ir_output), (MLX_output_error(ir_output) == ESP_OK) ? "true" : "false");
        //TODO: pressure measurement

        servo_rotation_result = perform_http_transactions(50.0, convert_to_degC(ir_output));


        if (servo_rotation_result != prev_servo_rotation_result) {
            ESP_LOGI("ot_esp_cli", "Moving vent to %d", servo_rotation_result);
            set_servo_angle(servo_rotation_result);
            prev_servo_rotation_result = servo_rotation_result;
        }
        
        vTaskDelay(5 * 1000 / portTICK_PERIOD_MS);
    }

        
    // measure
    // if time since last communication > 10min
    //     active (enable modem)
    //     communicate data
    //     modem sleep (disable modem)
    //     move servo
    // light_sleep 1 min
    // delay 1 min
    
    
    //     esp_light_sleep_start();
    //     switch (esp_sleep_get_wakeup_cause()) {
    //         case ESP_SLEEP_WAKEUP_TIMER:
    //             ESP_LOGI("Wakeup", "timer_event");
    //             break;
    //         case ESP_SLEEP_WAKEUP_GPIO:
    //             ESP_LOGI("Wakeup", "gpio_event");
    //             break;
    //         default:
    //             ESP_LOGI("Wakeup", "default");
    //             break;

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
        .intr_type = GPIO_INTR_ANYEDGE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = 1ULL<<CONFIG_GPIO_OPEN_BUTTON
    };
    ESP_ERROR_CHECK(gpio_config(&open_push_button_config));
    ESP_ERROR_CHECK(gpio_isr_handler_add(CONFIG_GPIO_OPEN_BUTTON, gpio_isr_handler, (void*) CONFIG_GPIO_OPEN_BUTTON));

    const gpio_config_t close_push_button_config = {
        .intr_type = GPIO_INTR_ANYEDGE,
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

    xTaskCreate(temperature_poll_task, "temperature_poll_task", 2048, NULL, 10, NULL);

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
    conf.os_mode = BMP2_OS_MODE_ULTRA_HIGH_RESOLUTION;
    conf.odr = BMP2_ODR_4000_MS;
    bmp2_set_config(&conf, &bmp280);
    
    xTaskCreate(pressure_poll_task, "pressure_poll_task", 2048, NULL, 10, NULL);

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
    int cur_cpu_freq_mhz = CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ;
    esp_pm_config_t pm_config = {
        .max_freq_mhz = cur_cpu_freq_mhz,
        .min_freq_mhz = cur_cpu_freq_mhz,
        .light_sleep_enable = true
    };
    ESP_ERROR_CHECK(esp_pm_configure(&pm_config));
    ESP_ERROR_CHECK(gpio_wakeup_enable(CONFIG_GPIO_CLOSE_BUTTON, GPIO_INTR_LOW_LEVEL));
    ESP_ERROR_CHECK(gpio_wakeup_enable(CONFIG_GPIO_OPEN_BUTTON, GPIO_INTR_LOW_LEVEL));
    ESP_ERROR_CHECK(esp_sleep_enable_gpio_wakeup());
    ESP_ERROR_CHECK(esp_sleep_enable_timer_wakeup(CONFIG_TIMER_WAKEUP_TIME_US));

    // Setup OpenThread and networking
    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_vfs_eventfd_register(&eventfd_config));

    esp_openthread_platform_config_t ot_config = {
        .radio_config = ESP_OPENTHREAD_DEFAULT_RADIO_CONFIG(),
        .host_config = ESP_OPENTHREAD_DEFAULT_HOST_CONFIG(),
        .port_config = ESP_OPENTHREAD_DEFAULT_PORT_CONFIG(),
    };

    // Initialize the OpenThread stack
    ESP_ERROR_CHECK(esp_openthread_init(&ot_config));

#if CONFIG_OPENTHREAD_LOG_LEVEL_DYNAMIC
    // The OpenThread log level directly matches ESP log level
    (void)otLoggingSetLevel(CONFIG_LOG_DEFAULT_LEVEL);
#endif

    esp_netif_t *openthread_netif;
    // Initialize the esp_netif bindings
    openthread_netif = init_openthread_netif(&ot_config);
    ESP_ERROR_CHECK(esp_netif_set_default_netif(openthread_netif));

#if CONFIG_OPENTHREAD_AUTO_START
    otOperationalDatasetTlvs dataset;
    otError error = otDatasetGetActiveTlvs(esp_openthread_get_instance(), &dataset);
    ESP_ERROR_CHECK(esp_openthread_auto_start((error == OT_ERROR_NONE) ? &dataset : NULL));
#endif

    xTaskCreate(start_openthread, "ot_main", 10240, xTaskGetCurrentTaskHandle(), 5, NULL);  

    
    xTaskCreate(main_loop, "main_loop", 8192, NULL, 5, NULL);

}