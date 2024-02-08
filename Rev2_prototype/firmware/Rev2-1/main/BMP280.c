#include <BMP2/bmp2.h>
#include <driver/i2c.h>

void bmp2_delay_us(uint32_t period, void *intf_ptr) {
    (void)intf_ptr;
    vTaskDelay( (period / 1000) + 1 );
}


BMP2_INTF_RET_TYPE bmp2_i2c_read(uint8_t reg_addr, uint8_t *reg_data, uint32_t length, const void *intf_ptr) {

    uint8_t dev_addr = *(uint8_t*)intf_ptr;

    return i2c_master_write_read_device(I2C_NUM_0, dev_addr, &reg_addr, 1, reg_data, length, 1000/portTICK_PERIOD_MS);
}

BMP2_INTF_RET_TYPE bmp2_i2c_write(uint8_t reg_addr, const uint8_t *reg_data, uint32_t length, const void *intf_ptr) {
    
    uint8_t dev_addr = *(uint8_t*)intf_ptr;    

    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (dev_addr << 1 | I2C_MASTER_WRITE), true);
    i2c_master_write_byte(cmd, reg_addr, true);
    i2c_master_write(cmd, reg_data, length, true);
    i2c_master_stop(cmd);

    esp_err_t ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, 1000 / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);
    
    return ret;
}

