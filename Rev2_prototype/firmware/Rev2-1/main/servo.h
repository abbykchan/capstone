#ifndef SERVO_H
#define SERVO_H

#include "driver/mcpwm_prelude.h"

// Please consult the datasheet of your servo before changing the following parameters
#define SERVO_MIN_PULSEWIDTH_US 1000 // Minimum pulse width in microsecond
#define SERVO_MAX_PULSEWIDTH_US 2000 // Maximum pulse width in microsecond
#define SERVO_MIN_DEGREE 0           // Minimum angle
#define SERVO_MAX_DEGREE 90          // Maximum angle

#define SERVO_PULSE_GPIO 14                  // GPIO connects to the PWM signal line
#define SERVO_TIMEBASE_RESOLUTION_HZ 1000000 // 1MHz, 1us per tick
#define SERVO_TIMEBASE_PERIOD 20000          // 20000 ticks, 20ms

esp_err_t init_servo(const mcpwm_timer_config_t servo_timer_config,
                     const mcpwm_operator_config_t servo_operator_config,
                     const mcpwm_comparator_config_t servo_comparator_config,
                     mcpwm_generator_config_t servo_generator_config);

esp_err_t set_servo_angle(int angle);

#endif