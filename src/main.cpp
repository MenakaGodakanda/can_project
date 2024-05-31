#include <iostream>
#include "j1939/j1939.h"
#include "canopen/canopen.h"

int main() {
    uint32_t id = 0;
    uint8_t data[8] = {0};
    uint8_t length = 8;

    // Send and receive a J1939 message
    j1939_send_message(0x18FF50E5, data, length);
    j1939_receive_message(&id, data, &length);

    // Send and receive a CANopen message
    canopen_send_message(0x601, data, length);
    canopen_receive_message(&id, data, &length);

    return 0;
}
