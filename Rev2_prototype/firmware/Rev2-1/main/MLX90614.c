#include "MLX90614.h"

#include <FreeRTOS.h>
#include <driver/i2c.h>

typedef struct {
    uint8_t byte_low;
    uint8_t byte_high;
    uint8_t error_code;
} response;

esp_err_t MLX_read_word(i2c_port_t i2c_num, command_t command, uint16_t* output) {
    esp_err_t ret;
    response data;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();    
    i2c_master_start(cmd);
    // Write the command
    i2c_master_write_byte(cmd, DEFAULT_ADDRESS << 1 | I2C_MASTER_WRITE, true);
    i2c_master_write_byte(cmd, command, true);
    // Read the result
    i2c_master_write_byte(cmd, DEFAULT_ADDRESS << 1 | I2C_MASTER_READ, true);
    i2c_master_read(cmd, &data, sizeof(data), true);
    i2c_master_stop(cmd);

    ret = i2c_master_cmd_begin(i2c_num, cmd, 1000 / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);
    crc

    output = (uint16_t)data.byte_high << 8 | data.byte_low;

    return ret;
}