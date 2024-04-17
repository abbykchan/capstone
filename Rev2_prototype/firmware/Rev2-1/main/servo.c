#include "servo.h"
#include "esp_check.h"
#include "esp_timer.h"
#include "esp_pm.h"
#include "freertos/FreeRTOS.h"
#include "driver/ledc.h"

static esp_pm_lock_handle_t sleep_lock = NULL;

#define TAG "Servo"
#define MAX_13_BIT ((1<<13)-1)

static inline uint32_t percent_to_count(float percent) {
    return (((percent/100) * (SERVO_MAX_PULSEWIDTH_US - SERVO_MIN_PULSEWIDTH_US)) + SERVO_MIN_PULSEWIDTH_US) * MAX_13_BIT / 20000;
}

esp_err_t init_servo(const gpio_config_t servo_cuttoff_config)
{
    // Servo timer needs MCPWM_TIMER_CLK_SRC_PLL160M as its clock source to aquire pm freq lock when enabling the timer
    ESP_RETURN_ON_ERROR(esp_pm_lock_create(ESP_PM_NO_LIGHT_SLEEP, 0, "servo_sleep", &sleep_lock), TAG, "Failed to create sleep lock");

    // const gpio_config_t pin_conifg = {
    //     .intr_type = GPIO_INTR_DISABLE,
    //     .pull_down_en = GPIO_PULLDOWN_ENABLE,
    //     .pull_up_en = GPIO_PULLUP_DISABLE,
    //     .mode = GPIO_MODE_OUTPUT,
    //     .pin_bit_mask = 1ULL<<CONFIG_GPIO_SERVO_DISCONNECT
    // };
    // ESP_ERROR_CHECK(gpio_config(&pin_conifg));

    ESP_RETURN_ON_ERROR(ledc_fade_func_install(ESP_INTR_FLAG_LEVEL1), TAG, "Failed to install ledc fade");

    ESP_RETURN_ON_ERROR(gpio_config(&servo_cuttoff_config), TAG, "Failed to configure servo disconnect GPIO");
    gpio_set_level(CONFIG_GPIO_SERVO_DISCONNECT, 0);

    return ESP_OK;
}

esp_err_t set_servo(int percent)
{
    if (percent > 100 || percent < 0)
    {
        return ESP_FAIL;
    }
    
    ledc_timer_config_t ledc_timer = {
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .timer_num = LEDC_TIMER_0,
        .duty_resolution = LEDC_TIMER_13_BIT,
        .freq_hz = 50,
        .clk_cfg = LEDC_USE_RC_FAST_CLK
    };
    ledc_channel_config_t ledc_channel = {
        .speed_mode     = LEDC_LOW_SPEED_MODE,
        .channel        = LEDC_CHANNEL_0,
        .timer_sel      = LEDC_TIMER_0,
        .intr_type      = LEDC_INTR_DISABLE,
        .gpio_num       = SERVO_PULSE_GPIO,
        .duty           = 0, // Set duty to 0%
        .hpoint         = 0
    };
    
    ESP_RETURN_ON_ERROR(ledc_timer_config(&ledc_timer), TAG, "Failed to configure ledc timer");
    ESP_RETURN_ON_ERROR(ledc_channel_config(&ledc_channel), TAG, "Failed to configure ledc channel");
    
    ESP_RETURN_ON_ERROR(esp_pm_lock_acquire(sleep_lock), TAG, "Failed to aquire sleep lock");
    gpio_set_level(CONFIG_GPIO_SERVO_DISCONNECT, 1);

    ESP_LOGI(TAG, "Percent: %d, Count: %lu", percent, percent_to_count(percent));
    ledc_set_duty_and_update(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, percent_to_count(percent), 0);

    vTaskDelay(SERVO_MOVEMENT_DELAY_MS/portTICK_PERIOD_MS);

    ledc_set_duty_and_update(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, 0, 0);
    gpio_set_level(CONFIG_GPIO_SERVO_DISCONNECT, 0);
    esp_pm_lock_release(sleep_lock);

    return ESP_OK;
}