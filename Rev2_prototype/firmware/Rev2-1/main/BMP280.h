#pragma once

#include <BMP2/bmp2.h>

void bmp2_delay_us(uint32_t period, void *intf_ptr);
BMP2_INTF_RET_TYPE bmp2_i2c_read(uint8_t reg_addr, uint8_t *reg_data, uint32_t length, const void *intf_ptr);
BMP2_INTF_RET_TYPE bmp2_i2c_write(uint8_t reg_addr, const uint8_t *reg_data, uint32_t length, const void *intf_ptr);
