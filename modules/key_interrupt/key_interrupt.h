#ifndef     __KEY_INTERRUPT_H__
#define     __KEY_INTERRUPT_H__

#include "common.h"


#define     KEY_PIN             1

#define     KEY_ON              1
#define     KEY_OFF             0

typedef enum _key_state_mode{
    KEY_OFF_STATE = 0U,
    KEY_ON_STATE  = 1U,
} key_state_mode;

extern key_state_mode key_state;

void key_init_interrupt();
uint32_t key_check_interrupt();
void key_interrupt_handler(unsigned int giccIar, void *param);

#endif