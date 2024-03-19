#include "servo.h"
#include "driver/mcpwm_prelude.h"
#include "esp_check.h"
#include "esp_timer.h"
#include "esp_pm.h"

static mcpwm_timer_handle_t servo_timer = NULL;
static esp_timer_handle_t servo_callback_timer = NULL;
static mcpwm_oper_handle_t servo_oper = NULL;
static mcpwm_cmpr_handle_t servo_comparator = NULL;
static mcpwm_gen_handle_t servo_generator = NULL;

static esp_pm_lock_handle_t sleep_lock = NULL;
static esp_pm_lock_handle_t freq_lock = NULL;

#define TAG "Servo"

void timer_callback(void* arg) {
    ESP_ERROR_CHECK(mcpwm_timer_start_stop(servo_timer, MCPWM_TIMER_STOP_FULL));
    ESP_ERROR_CHECK(mcpwm_timer_disable(servo_timer));
    ESP_ERROR_CHECK(esp_pm_lock_release(sleep_lock));
    ESP_ERROR_CHECK(esp_pm_lock_release(freq_lock));
}

static inline uint32_t example_angle_to_compare(int angle)
{
    return (angle - SERVO_MIN_PERCENT) * (SERVO_MAX_PULSEWIDTH_US - SERVO_MIN_PULSEWIDTH_US) / (SERVO_MAX_PERCENT - SERVO_MIN_PERCENT) + SERVO_MIN_PULSEWIDTH_US;
}

esp_err_t init_servo(const mcpwm_timer_config_t servo_timer_config,
                     const mcpwm_operator_config_t servo_operator_config,
                     const mcpwm_comparator_config_t servo_comparator_config,
                     mcpwm_generator_config_t servo_generator_config)
{
    // Servo timer needs MCPWM_TIMER_CLK_SRC_PLL160M as its clock source to aquire pm freq lock when enabling the timer
    assert(servo_timer_config.clk_src == MCPWM_TIMER_CLK_SRC_PLL160M);
    ESP_RETURN_ON_ERROR(esp_pm_lock_create(ESP_PM_NO_LIGHT_SLEEP, 0, "servo_sleep", &sleep_lock), TAG, "Failed to create sleep lock");
    ESP_RETURN_ON_ERROR(esp_pm_lock_create(ESP_PM_APB_FREQ_MAX, 0, "servo_freq", &freq_lock), TAG, "Failed to create freq lock");
    ESP_RETURN_ON_ERROR(mcpwm_new_timer(&servo_timer_config, &servo_timer), TAG, "Timer setup failed");
    ESP_RETURN_ON_ERROR(mcpwm_new_operator(&servo_operator_config, &servo_oper), TAG, "Operator setup failed");
    ESP_RETURN_ON_ERROR(mcpwm_operator_connect_timer(servo_oper, servo_timer), TAG, "Timer connection to operator failed");
    ESP_RETURN_ON_ERROR(mcpwm_new_comparator(servo_oper, &servo_comparator_config, &servo_comparator), TAG, "Comparitor setup failed");
    ESP_RETURN_ON_ERROR(mcpwm_new_generator(servo_oper, &servo_generator_config, &servo_generator), TAG, "Generator setup failed");

    // set the initial compare value, so that the servo will spin to the center position
    ESP_RETURN_ON_ERROR(mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(0)), TAG, "Failed to set angle");

    // go high on counter empty
    ESP_RETURN_ON_ERROR(mcpwm_generator_set_action_on_timer_event(servo_generator, MCPWM_GEN_TIMER_EVENT_ACTION(MCPWM_TIMER_DIRECTION_UP, MCPWM_TIMER_EVENT_EMPTY, MCPWM_GEN_ACTION_HIGH)), TAG, "Timer action setup failed");
    // go low on compare threshold
    ESP_RETURN_ON_ERROR(mcpwm_generator_set_action_on_compare_event(servo_generator, MCPWM_GEN_COMPARE_EVENT_ACTION(MCPWM_TIMER_DIRECTION_UP, servo_comparator, MCPWM_GEN_ACTION_LOW)), TAG, "Compare action setup failed");
    

    const esp_timer_create_args_t callback_timer_args = {
        .callback = &timer_callback,
        .name = "Servo Movement Delay"
    };
    ESP_RETURN_ON_ERROR(esp_timer_create(&callback_timer_args, &servo_callback_timer ), TAG, "Failed to create callback timer");

    return ESP_OK;
}

esp_err_t set_servo(int percent)
{
    if (percent > SERVO_MAX_PERCENT || percent < SERVO_MIN_PERCENT)
    {
        return ESP_FAIL;
    }
    ESP_RETURN_ON_ERROR(esp_pm_lock_acquire(sleep_lock), TAG, "Failed to aquire sleep lock");
    ESP_RETURN_ON_ERROR(esp_pm_lock_acquire(freq_lock), TAG, "Failed to aquire freq lock");
    ESP_RETURN_ON_ERROR(mcpwm_timer_enable(servo_timer), TAG, "Timer enable failed");
    ESP_RETURN_ON_ERROR(mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(percent)), TAG, "Failed to set percent");
    // ESP_RETURN_ON_ERROR(mcpwm_timer_start_stop(servo_timer, MCPWM_TIMER_START_STOP_FULL ), TAG, "Timer start failed");
    
    // This only needs to generate 3 pulses, so there is likely a much more efficient way to make it happen.
    ESP_RETURN_ON_ERROR(mcpwm_timer_start_stop(servo_timer, MCPWM_TIMER_START_NO_STOP), TAG, "Timer start failed");
    if (esp_timer_start_once(servo_callback_timer, SERVO_MOVEMENT_DELAY_US) == ESP_ERR_INVALID_STATE) {
        esp_timer_restart(servo_callback_timer, SERVO_MOVEMENT_DELAY_US);
    }
    return ESP_OK;
}