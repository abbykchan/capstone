#pragma once

#include "esp_err.h"
#include <stdint.h>

#define DEFAULT_ADDRESS 0x5A
#define ERROR_FLAG (1 << 15)

typedef enum {
    RAM_ACCESS_MASK     = 0b00011111, // bitwise AND with address to get the command
    EEPROM_ACCESS_MASK  = 0b00111111, // bitwise AND with address to get the command
    READ_FLAGS          = 0b11110000,
    ENTER_SLEEP         = 0b11111111,
} command_t;


typedef enum {
    OBJECT_TEMP_MAX     = 0x00,
    OBJECT_TEMP_MIN     = 0x01,
    PWMCTRL             = 0x2,
    AMBIENT_TEMP_RANGE  = 0x3,
    EMISSIVITY          = 0x04,
    CONFIG_REG1         = 0x05,
    SMBUS_ADDRESS       = 0x0E, // LSB only
    ID_NUMBER1          = 0x1C, // Read only
    ID_NUMBER2          = 0x1D, // Read only
    ID_NUMBER3          = 0x1E, // Read only
    ID_NUMBER4          = 0x1F, // Read only
} mlx_eeprom_address_t;

typedef enum {
    RAW_DATA_IR_CH1 = 0x04,
    RAW_DATA_IR_CH2 = 0x05,
    AMBIENT_TEMP    = 0x06,
    OBJECT1_TEMP    = 0x07,
    OBJECT2_TEMP    = 0x08,
} mlx_ram_address_t;

// typedef struct __attribute__((packed)) {
//     int a:2;
//     int b:6
// } mlx_;


esp_err_t MLX_read_word();

inline esp_err_t MLX_output_error(uint16_t result) {
    return (ERROR_FLAG & result) ? (ESP_FAIL) : (ESP_OK);
}

// divide by 50 (deg K), subtract 273.15 (deg C)
inline float convert_to_degC(uint16_t result) {
    return (result / 50.0f) - 273.15f;
}