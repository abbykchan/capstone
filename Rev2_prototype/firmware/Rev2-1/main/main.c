#include <stdio.h>
#include "sdkconfig.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

#include "esp_timer.h"
#include "driver/gpio.h"

static QueueHandle_t gpio_evt_queue = NULL;

typedef struct {
    uint32_t gpio_num;
    uint64_t timestamp;
} gpio_trigger;

static void IRAM_ATTR gpio_isr_handler(void* arg)
{
    gpio_trigger gpio = {
        .gpio_num = (uint32_t) arg,
        .timestamp = esp_timer_get_time(),
    };
    xQueueSendFromISR(gpio_evt_queue, &gpio, NULL);
}

static void gpio_task_example(void* arg)
{
    gpio_trigger gpio, prev_gpio = {0};
    
    for (;;) {
        if (xQueueReceive(gpio_evt_queue, &gpio, portMAX_DELAY)) {
            if (prev_gpio.timestamp + CONFIG_DEBOUNCE_INTERVAL < gpio.timestamp) {
                printf("gpio_num: %lu, timestamp: %llu, level: %d\n", gpio.gpio_num, gpio.timestamp, gpio_get_level(gpio.gpio_num));
                prev_gpio = gpio;
            }
        }
    }
}

void app_main(void)
{
    printf("Hello world!\n");

    gpio_config_t open_push_button = {
        .intr_type = GPIO_INTR_POSEDGE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = 1ULL<<CONFIG_GPIO_OPEN_BUTTON
    };
    gpio_config(&open_push_button);


    //create a queue to handle gpio event from isr
    gpio_evt_queue = xQueueCreate(10, sizeof(gpio_trigger));
    //start gpio task
    xTaskCreate(gpio_task_example, "gpio_task_example", 2048, NULL, 10, NULL);

    gpio_install_isr_service(0);
    gpio_isr_handler_add(CONFIG_GPIO_OPEN_BUTTON, gpio_isr_handler, (void*) CONFIG_GPIO_OPEN_BUTTON);

}


