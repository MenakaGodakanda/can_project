#include "canopen.h"
#include <stdio.h>

void canopen_send_message(uint32_t id, const uint8_t *data, uint8_t length) {
    printf("CANopen: Sending message with ID %u\n", id);
}

void canopen_receive_message(uint32_t *id, uint8_t *data, uint8_t *length) {
    printf("CANopen: Receiving message\n");
}
