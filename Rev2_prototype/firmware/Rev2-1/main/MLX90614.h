#pragma once

#include "esp_err.h"
#include <driver/i2c.h>
#include <stdint.h>

#define MLX90614_DEFAULT_ADDRESS 0x5A
#define MLX90614_ERROR_FLAG (1 << 15)

enum {
    MLX90614_RAM_ACCESS_MASK     = 0b00011111, // bitwise AND with address to get the command
    MLX90614_EEPROM_ACCESS_MASK  = 0b00111111, // bitwise AND with address to get the command
    MLX90614_READ_FLAGS          = 0b11110000,
    MLX90614_ENTER_SLEEP         = 0b11111111,
};

enum {
    MLX90614_EEPROM_OBJECT_TEMP_MAX     = 0x00,
    MLX90614_EEPROM_OBJECT_TEMP_MIN     = 0x01,
    MLX90614_EEPROM_PWMCTRL             = 0x2,
    MLX90614_EEPROM_AMBIENT_TEMP_RANGE  = 0x3,
    MLX90614_EEPROM_EMISSIVITY          = 0x04,
    MLX90614_EEPROM_CONFIG_REG1         = 0x05,
    MLX90614_EEPROM_SMBUS_ADDRESS       = 0x0E, // LSB only
    MLX90614_EEPROM_ID_NUMBER1          = 0x1C, // Read only
    MLX90614_EEPROM_ID_NUMBER2          = 0x1D, // Read only
    MLX90614_EEPROM_ID_NUMBER3          = 0x1E, // Read only
    MLX90614_EEPROM_ID_NUMBER4          = 0x1F, // Read only
};

enum {
    MLX90614_RAM_RAW_DATA_IR_CH1 = 0x04,
    MLX90614_RAM_RAW_DATA_IR_CH2 = 0x05,
    MLX90614_RAM_AMBIENT_TEMP    = 0x06,
    MLX90614_RAM_OBJECT1_TEMP    = 0x07,
    MLX90614_RAM_OBJECT2_TEMP    = 0x08,
};

// typedef struct __attribute__((packed)) {
//     int a:2;
//     int b:6
// } mlx_;


esp_err_t MLX_read_word(i2c_port_t i2c_num, uint8_t command, uint16_t* output);

inline esp_err_t MLX_output_error(uint16_t result) {
    return (MLX90614_ERROR_FLAG & result) ? (ESP_FAIL) : (ESP_OK);
}

// divide by 50 (deg K), subtract 273.15 (deg C)
inline float convert_to_degC(uint16_t result) {
    return (result / 50.0f) - 273.15f;
}