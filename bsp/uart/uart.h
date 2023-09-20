#ifndef __UART_H__
#define __UART_H__

#include "common.h"


/** UART - Register Layout Typedef */
typedef struct 
{
    __IO uint32_t   URXD;
    __IO uint8_t    RESERVED_0[60];
    __IO uint32_t   UTXD;
    __IO uint8_t    RESERVED_1[60];
    __IO uint32_t   UCR1;
    __IO uint32_t   UCR2;
    __IO uint32_t   UCR3;
    __IO uint32_t   UCR4;
    __IO uint32_t   UFCR;
    __IO uint32_t   USR1;
    __IO uint32_t   USR2;
    __IO uint32_t   UESC;
    __IO uint32_t   UTIM;
    __IO uint32_t   UBIR;
    __IO uint32_t   UBMR;
    __IO uint32_t   UBRC;
    __IO uint32_t   ONEMS;
    __IO uint32_t   UTS;
    __IO uint32_t   UMCR;
} UART_TYPE;


/* UART - Peripheral instance base addresses */
/** Peripheral UART base address */
#define     UART1_BASE      0x2020000
#define     UART2_BASE      0x21e8000
#define     UART3_BASE      0x21ec000
#define     UART4_BASE      0x21f0000
#define     UART5_BASE      0x21f4000
#define     UART6_BASE      0x21fc000
#define     UART7_BASE      0x2018000
#define     UART8_BASE      0x2288000

/** Peripheral UART base pointer */
#define     UART1_USBPort    ((UART_TYPE *)UART1_BASE)

/*IOMUX Setting*/
/**IOMUX MODE Setting*/
#define     IOMUXC_SW_MUX_CTL_PAD_UART1_TX_DATA     (__I uint32_t *)0x20e0084
#define     IOMUXC_SW_MUX_CTL_PAD_UART1_TX_DATA_UART1_TX    0x0

#define     IOMUXC_SW_MUX_CTL_PAD_UART1_RX_DATA     (__I uint32_t *)0x20e0088
#define     IOMUXC_SW_MUX_CTL_PAD_UART1_RX_DATA_UART1_RX    0x0

/**IOMUX PAD setting*/
#define     IOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA     (__I uint32_t *)0x20e0310
#define     IOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA_UART1_TX    0x10b0

#define     IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA     (__I uint32_t *)0x20e0314
#define     IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA_UART1_RX    0x10b0


void uart_disable(UART_TYPE *base);
void uart_enable(UART_TYPE *base);
#if 0
void uart_softreset(UART_TYPE *base);
#endif
void putc(uchar_t c);
void puts(char * str);
uchar_t getc(void);
void uart_setbaudrate(UART_TYPE *base, uint_t baudrate, uint_t srcclock_hz);
void uart1_io_init(void);
void uart1_USB_init(void);


#endif