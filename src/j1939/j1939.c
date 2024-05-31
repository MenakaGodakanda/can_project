#include "j1939.h"
#include <stdio.h>

void j1939_send_message(uint32_t id, const uint8_t *data, uint8_t length) {
    printf("J1939: Sending message with ID %u\n", id);
}

void j1939_receive_message(uint32_t *id, uint8_t *data, uint8_t *length) {
    printf("J1939: Receiving message\n");
}
