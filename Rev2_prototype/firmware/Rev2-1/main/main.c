#include <stdio.h>
#include "sdkconfig.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

#include "esp_timer.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "driver/i2c.h"

#include "MLX90614.h"

static volatile uint32_t gpio_num;
static esp_timer_handle_t debounce_timer;

static void IRAM_ATTR gpio_isr_handler(void* arg)
{
    gpio_num = (uint32_t) arg;
    if (esp_timer_start_once(debounce_timer, CONFIG_DEBOUNCE_INTERVAL) == ESP_ERR_INVALID_STATE) {
        esp_timer_restart(debounce_timer, CONFIG_DEBOUNCE_INTERVAL);
    }
}

void debounce_timer_callback(void* arg) {
    // button_args* args = (button_args*) arg;
    printf("gpio_num: %lu, level: %d\n", gpio_num,  gpio_get_level(gpio_num));
}

static void temperature_poll_task(void* arg) {
    uint16_t output = 0;
    while (true) {
        MLX_read_word(I2C_NUM_0, (RAM_ACCESS_MASK & OBJECT1_TEMP), &output);
        printf("Temp: %f, success: %s\n", convert_to_degC(output), (MLX_output_error(output) == ESP_OK) ? "true" : "false");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
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



    xTaskCreate(temperature_poll_task, "temperature_poll_task", 2048, NULL, 10, NULL);
}


