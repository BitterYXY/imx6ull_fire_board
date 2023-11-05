#ifndef __KEY_H__
#define __KEY_H__

#include "common.h"

#define     KEY_PIN             1

#define     KEY_ON              1
#define     KEY_OFF             0

void key_init();
uint32_t key_check();

#endif