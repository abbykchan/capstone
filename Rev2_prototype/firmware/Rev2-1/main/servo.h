#ifndef SERVO_H
#define SERVO_H

#include "driver/gpio.h"

// Please consult the datasheet of your servo before changing the following parameters
#define SERVO_MIN_PULSEWIDTH_US 1200 // Minimum pulse width in microsecond
#define SERVO_MAX_PULSEWIDTH_US 1950 // Maximum pulse width in microsecond

#define SERVO_PULSE_GPIO 14                  // GPIO connects to the PWM signal line

#define SERVO_MOVEMENT_DELAY_MS  250

esp_err_t init_servo(const gpio_config_t servo_cuttoff_config);

esp_err_t set_servo(int angle);

#endif