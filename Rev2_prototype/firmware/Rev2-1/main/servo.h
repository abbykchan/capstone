#ifndef SERVO_H
#define SERVO_H

#include "driver/mcpwm_prelude.h"

// Please consult the datasheet of your servo before changing the following parameters
#define SERVO_MIN_PULSEWIDTH_US 1200 // Minimum pulse width in microsecond
#define SERVO_MAX_PULSEWIDTH_US 1950 // Maximum pulse width in microsecond
#define SERVO_MIN_PERCENT 0           // Minimum percent
#define SERVO_MAX_PERCENT 100         // Maximum percent

#define SERVO_PULSE_GPIO 14                  // GPIO connects to the PWM signal line
#define SERVO_TIMEBASE_RESOLUTION_HZ 1000000 // 1MHz, 1us per tick
#define SERVO_TIMEBASE_PERIOD 20000          // 20000 ticks, 20ms

#define SERVO_MOVEMENT_DELAY_US 250000

esp_err_t init_servo(const mcpwm_timer_config_t servo_timer_config,
                     const mcpwm_operator_config_t servo_operator_config,
                     const mcpwm_comparator_config_t servo_comparator_config,
                     mcpwm_generator_config_t servo_generator_config);

esp_err_t set_servo(int angle);

#endif