#ifndef ESP_HTTP_CLIENT_TASK_H
#define ESP_HTTP_CLIENT_TASK_H

/**
 * Send and receive all network information
 * @param temp      ?
 * @param pressure  ?
 * @returns Desired Servo angle
*/
int perform_http_transactions(float battery, float temperature);

#endif