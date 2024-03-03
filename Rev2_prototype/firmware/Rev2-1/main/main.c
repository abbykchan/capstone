#include <stdio.h>
#include "sdkconfig.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

#include "esp_timer.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "driver/i2c.h"
#include "driver/mcpwm_prelude.h"
#include "MLX90614.h"
#include "BMP280.h"
#include "BMP2/bmp2.h"

#include <unistd.h>
#include <string.h>

#include "esp_err.h"
#include "esp_event.h"
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

#define TAG "ot_esp_cli"

// Please consult the datasheet of your servo before changing the following parameters
#define SERVO_MIN_PULSEWIDTH_US 1000  // Minimum pulse width in microsecond
#define SERVO_MAX_PULSEWIDTH_US 2000  // Maximum pulse width in microsecond
#define SERVO_MIN_DEGREE        0   // Minimum angle
#define SERVO_MAX_DEGREE        90    // Maximum angle

#define SERVO_PULSE_GPIO             14        // GPIO connects to the PWM signal line
#define SERVO_TIMEBASE_RESOLUTION_HZ 1000000  // 1MHz, 1us per tick
#define SERVO_TIMEBASE_PERIOD        20000    // 20000 ticks, 20ms

static inline uint32_t example_angle_to_compare(int angle)
{
    return (angle - SERVO_MIN_DEGREE) *
             (SERVO_MAX_PULSEWIDTH_US - SERVO_MIN_PULSEWIDTH_US)
              / (SERVO_MAX_DEGREE - SERVO_MIN_DEGREE) + SERVO_MIN_PULSEWIDTH_US;
}

static volatile uint32_t gpio_num;
static esp_timer_handle_t debounce_timer = NULL;
static esp_timer_handle_t pressure_timer = NULL;

static mcpwm_timer_handle_t servo_timer = NULL;
static mcpwm_oper_handle_t servo_oper = NULL;
static mcpwm_cmpr_handle_t servo_comparator = NULL;
static mcpwm_gen_handle_t servo_generator = NULL;



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
            mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(SERVO_MIN_DEGREE));
            break;
        case CONFIG_GPIO_OPEN_BUTTON:
            mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(SERVO_MAX_DEGREE));
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
        // ESP_LOGI("MLX90614", "Temp: %f, success: %s", convert_to_degC(output), (MLX_output_error(output) == ESP_OK) ? "true" : "false");

        // ESP_LOGI("PRES", "Temp: %f, Pressure: %f", readTemperature(I2C_NUM_0), readPressure(I2C_NUM_0));
        // vTaskDelay(5000 / portTICK_PERIOD_MS);
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

static void ot_task_worker(void *aContext)
{
    esp_openthread_platform_config_t config = {
        .radio_config = ESP_OPENTHREAD_DEFAULT_RADIO_CONFIG(),
        .host_config = ESP_OPENTHREAD_DEFAULT_HOST_CONFIG(),
        .port_config = ESP_OPENTHREAD_DEFAULT_PORT_CONFIG(),
    };

    // Initialize the OpenThread stack
    ESP_ERROR_CHECK(esp_openthread_init(&config));

#if CONFIG_OPENTHREAD_LOG_LEVEL_DYNAMIC
    // The OpenThread log level directly matches ESP log level
    (void)otLoggingSetLevel(CONFIG_LOG_DEFAULT_LEVEL);
#endif
    // Initialize the OpenThread cli
#if CONFIG_OPENTHREAD_CLI
    esp_openthread_cli_init();
#endif

    esp_netif_t *openthread_netif;
    // Initialize the esp_netif bindings
    openthread_netif = init_openthread_netif(&config);
    esp_netif_set_default_netif(openthread_netif);

#if CONFIG_OPENTHREAD_CLI_ESP_EXTENSION
    esp_cli_custom_command_init();
#endif // CONFIG_OPENTHREAD_CLI_ESP_EXTENSION

    // Run the main loop
#if CONFIG_OPENTHREAD_CLI
    esp_openthread_cli_create_task();
#endif

#if CONFIG_OPENTHREAD_AUTO_START
    otOperationalDatasetTlvs dataset;
    otError error = otDatasetGetActiveTlvs(esp_openthread_get_instance(), &dataset);
    ESP_ERROR_CHECK(esp_openthread_auto_start((error == OT_ERROR_NONE) ? &dataset : NULL));
#endif
    esp_openthread_launch_mainloop();

    // Clean up
    esp_netif_destroy(openthread_netif);
    esp_openthread_netif_glue_deinit();

    esp_vfs_eventfd_unregister();
    vTaskDelete(NULL);
}






void app_main(void)
{
    // Setup debounce timer for pushbuttons
    const esp_timer_create_args_t debounce_timer_args = {
        .callback = &debounce_timer_callback,
        .name = "Debounce"
    };
    esp_timer_create(&debounce_timer_args, &debounce_timer);
    
    // Setup GPIOs & ISRs for pushbuttons
    gpio_install_isr_service(ESP_INTR_FLAG_LEVEL1);

    const gpio_config_t open_push_button_config = {
        .intr_type = GPIO_INTR_ANYEDGE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = 1ULL<<CONFIG_GPIO_OPEN_BUTTON
    };
    gpio_config(&open_push_button_config);
    gpio_isr_handler_add(CONFIG_GPIO_OPEN_BUTTON, gpio_isr_handler, (void*) CONFIG_GPIO_OPEN_BUTTON);

    const gpio_config_t close_push_button_config = {
        .intr_type = GPIO_INTR_ANYEDGE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = 1ULL<<CONFIG_GPIO_CLOSE_BUTTON
    };
    gpio_config(&close_push_button_config);
    gpio_isr_handler_add(CONFIG_GPIO_CLOSE_BUTTON, gpio_isr_handler, (void*) CONFIG_GPIO_CLOSE_BUTTON);
    
    const i2c_config_t ir_temp_sensor_config = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = 6,
        .scl_io_num = 7,
        .sda_pullup_en = GPIO_PULLUP_DISABLE,
        .scl_pullup_en = GPIO_PULLUP_DISABLE,
        .master.clk_speed = 100000,
    };
    i2c_param_config(I2C_NUM_0, &ir_temp_sensor_config);
    i2c_driver_install(I2C_NUM_0, ir_temp_sensor_config.mode, 0, 0, ESP_INTR_FLAG_LEVEL1);

    // xTaskCreate(temperature_poll_task, "temperature_poll_task", 2048, NULL, 10, NULL);

    const esp_timer_create_args_t pressure_timer_args = {
        .callback = &pressure_timer_callback,
        .name = "Pressure"
    };
    esp_timer_create(&pressure_timer_args, &pressure_timer);
    
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

    ESP_ERROR_CHECK(mcpwm_new_timer(&servo_timer_config, &servo_timer));
    ESP_ERROR_CHECK(mcpwm_new_operator(&servo_operator_config, &servo_oper));
    ESP_ERROR_CHECK(mcpwm_operator_connect_timer(servo_oper, servo_timer));
    ESP_ERROR_CHECK(mcpwm_new_comparator(servo_oper, &servo_comparator_config, &servo_comparator));
    ESP_ERROR_CHECK(mcpwm_new_generator(servo_oper, &servo_generator_config, &servo_generator));

    // set the initial compare value, so that the servo will spin to the center position
    ESP_ERROR_CHECK(mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(0)));

    // go high on counter empty
    ESP_ERROR_CHECK(mcpwm_generator_set_action_on_timer_event(servo_generator,
                                                              MCPWM_GEN_TIMER_EVENT_ACTION(MCPWM_TIMER_DIRECTION_UP, MCPWM_TIMER_EVENT_EMPTY, MCPWM_GEN_ACTION_HIGH)));
    // go low on compare threshold
    ESP_ERROR_CHECK(mcpwm_generator_set_action_on_compare_event(servo_generator,
                                                                MCPWM_GEN_COMPARE_EVENT_ACTION(MCPWM_TIMER_DIRECTION_UP, servo_comparator, MCPWM_GEN_ACTION_LOW)));
    ESP_ERROR_CHECK(mcpwm_timer_enable(servo_timer));
    ESP_ERROR_CHECK(mcpwm_timer_start_stop(servo_timer, MCPWM_TIMER_START_NO_STOP));




    esp_vfs_eventfd_config_t eventfd_config = {
        .max_fds = 3,
    };

    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_vfs_eventfd_register(&eventfd_config));

    xTaskCreate(ot_task_worker, "ot_cli_main", 10240, xTaskGetCurrentTaskHandle(), 5, NULL);  
    xTaskCreate(http_test_task, "http_test_task", 8192, NULL, 5, NULL);

    // while(1) {
    //   sleep(2);
    //   ESP_LOGI(TAG, "Closing vent to 0");
    //   mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(SERVO_MIN_DEGREE));
    //   sleep(2);
    //   ESP_LOGI(TAG, "Opening vent to 90");
    //   mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(SERVO_MAX_DEGREE));
    // }

    // sleep(3);
    // // int servo_rotation = http_rest();
    // // ESP_LOGI(TAG, "Closing vent to %d", servo_rotation);

    while (1) {
        // Access the servo rotation value from http_http_client_task.c
        int servo_rotation_result = get_servo_rotation_result();

        if (servo_rotation_result == 0) {
            ESP_LOGI(TAG, "Closing vent to %d", servo_rotation_result);
            mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(SERVO_MIN_DEGREE));
        } else if (servo_rotation_result == 90) {
            ESP_LOGI(TAG, "Opening vent to %d", servo_rotation_result);
            mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(SERVO_MAX_DEGREE));
        }
        
        sleep(3);
    }
}