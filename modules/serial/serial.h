#ifndef __SERIAL_H__
#define __SERIAL_H__

#include "gpio.h"
#include "iomux.h"
#include "clock.h"
#include "uart.h"

#define SERIAL_UART UART1
#define SERIAL_BAUDRATE 115200U

void serial_pin_init(void);

void serial_init(void);

uint32_t serial_clockSrcFreq(void);

void putc(unsigned char c);
void puts(char *str);
unsigned char getc(void);

#endif