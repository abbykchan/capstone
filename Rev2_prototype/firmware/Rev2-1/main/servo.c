#include "servo.h"
#include "driver/mcpwm_prelude.h"
#include "esp_check.h"

static mcpwm_timer_handle_t servo_timer = NULL;
static mcpwm_oper_handle_t servo_oper = NULL;
static mcpwm_cmpr_handle_t servo_comparator = NULL;
static mcpwm_gen_handle_t servo_generator = NULL;

#define TAG "Servo"

static inline uint32_t example_angle_to_compare(int angle)
{
    return (angle - SERVO_MIN_DEGREE) *
               (SERVO_MAX_PULSEWIDTH_US - SERVO_MIN_PULSEWIDTH_US) / (SERVO_MAX_DEGREE - SERVO_MIN_DEGREE) +
           SERVO_MIN_PULSEWIDTH_US;
}

esp_err_t init_servo(const mcpwm_timer_config_t servo_timer_config,
                     const mcpwm_operator_config_t servo_operator_config,
                     const mcpwm_comparator_config_t servo_comparator_config,
                     mcpwm_generator_config_t servo_generator_config)
{

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
    ESP_RETURN_ON_ERROR(mcpwm_timer_enable(servo_timer), TAG, "Timer enable failed");
    ESP_RETURN_ON_ERROR(mcpwm_timer_start_stop(servo_timer, MCPWM_TIMER_START_NO_STOP), TAG, "Timer start failed");
    return ESP_OK;
}

esp_err_t set_servo_angle(int angle)
{
    if (angle > SERVO_MAX_DEGREE || angle < SERVO_MIN_DEGREE)
    {
        return ESP_FAIL;
    }
    return mcpwm_comparator_set_compare_value(servo_comparator, example_angle_to_compare(angle));
}