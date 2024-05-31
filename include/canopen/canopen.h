#ifndef CANOPEN_H
#define CANOPEN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void canopen_send_message(uint32_t id, const uint8_t *data, uint8_t length);
void canopen_receive_message(uint32_t *id, uint8_t *data, uint8_t *length);

#ifdef __cplusplus
}
#endif

#endif // CANOPEN_H
