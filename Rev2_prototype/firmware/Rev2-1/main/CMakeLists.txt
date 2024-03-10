idf_component_register(SRCS "servo.c" "esp_http_client_task.c" "BMP280.c" "main.c" "MLX90614.c" "BMP2/bmp2.c"
                    INCLUDE_DIRS "."
                    REQUIRES ${requires}
                    EMBED_TXTFILES howsmyssl_com_root_cert.pem
                    postman_root_cert.pem)

if(${target} STREQUAL "linux")
    list(APPEND requires esp_stubs esp_event esp-tls esp_http_client protocol_examples_common nvs_flash)
endif()
