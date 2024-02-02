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

static void temperature_poll_task(void* arg) {
    uint16_t output = 0;
    while (true) {
        MLX_read_word(I2C_NUM_0, (RAM_ACCESS_MASK & OBJECT1_TEMP), &output);
        ESP_LOGI("TEMP", "Temp: %f, success: %s", convert_to_degC(output), (MLX_output_error(output) == ESP_OK) ? "true" : "false");
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
}


