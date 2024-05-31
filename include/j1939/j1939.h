#ifndef J1939_H
#define J1939_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void j1939_send_message(uint32_t id, const uint8_t *data, uint8_t length);
void j1939_receive_message(uint32_t *id, uint8_t *data, uint8_t *length);

#ifdef __cplusplus
}
#endif

#endif // J1939_H
