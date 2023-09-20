#include "common.h"
#include "uart.h"


void uart_disable(UART_TYPE *base)
{
    base->UCR1 &= ~(1<<0);
}


void uart_enable(UART_TYPE *base)
{
    base->UCR1 |= (1<<0);
}


void uart_softreset(UART_TYPE *base)
{
    base->UCR2 &= ~(1<<0);
    while((base->UCR2 & 0x1) == 0);             // waiting softreset finished.
}


/**
 * @brief transfer(send) a character
 * 
 * @param c 
 */
void putc(uchar_t c)
{
    while(((UART1_USBPort->USR2 >> 3) & 0x1) == 0);     //waiting latest transfer finished.
    UART1_USBPort->UTXD = (c & 0xff);                   // transfer a character.
}


/**
 * @brief transfer (send) a string
 * 
 * @param str 
 */
void puts(char * str)
{
    char *p = str;

    while(*p)
    {
        putc(*p++);
    }
}


/**
 * @brief receive a character
 * 
 * @return uchar_t 
 */
uchar_t getc(void)
{
    while((UART1_USBPort->USR2 & 0x1) == 0);            //waiting character receive.
    return UART1_USBPort->URXD;                         // return the character received.
}

#if 0
void uart_setbaudrate(UART_TYPE *base, uint_t baudrate, uint_t srcclock_hz)
{
    uint32_t numerator = 0;
    uint32_t denominator = 0;
    uint32_t divisor = 0;
    uint32_t refFreDiv = 0;
    uint32_t divider = 1;
    uint64_t baudDiff = 0;
    uint64_t tempNumerator = 0;
    uint64_t tempDenominator = 0;

    numerator = srcclock_hz;
    denominator = baudrate << 4;
    divisor = 1;
    while(denominator != 0)
    {
        divisor = denominator;
        denominator = numerator % denominator;
        numerator = divisor;
    }
    numerator = srcclock_hz / divisor;
    denominator = (baudrate << 4) / divisor;
    if((numerator > (0xffff *7)) || (denominator > 0xffff))
    {
        uint32_t m = (numerator - 1) / (0xffff * 7) + 1;
        uint32_t n = (denominator -1) / (0xffff) + 1;
        uint32_t max = m > n ? m : n;
        numerator /= max;
        denominator /= max;
        if(0 == numerator)
        {
            numerator = 1;
        }
        if(0 == denominator)
        {
            denominator = 1;
        }
    }
    divider = (numerator -1) / (0xffff) + 1;

    switch(divider)
    {
        case 1:
            refFreDiv = 0x05;
            break;
        case 2:
            refFreDiv = 0x04;
            break;
        case 3:
            refFreDiv = 0x03;
            break;
        case 4:
            refFreDiv = 0x02;
            break;
        case 5:
            refFreDiv = 0x01;
            break;
        case 6:
            refFreDiv = 0x00;
            break;
        case 7:
            refFreDiv = 0x06;
            break;
        default:
            refFreDiv = 0x05;
            break;
    }

    tempNumerator = srcclock_hz;
    tempDenominator = (numerator << 4);
    divisor = 1;
    while(tempDenominator != 0)
    {
        divisor = tempDenominator;
        tempDenominator = tempNumerator % tempDenominator;
        tempNumerator = divisor;
    }
    tempNumerator = srcclock_hz / divisor;
    tempDenominator = (numerator << 4)/divisor;
    baudDiff = (tempNumerator * denominator) / tempDenominator;
    baudDiff = (baudDiff >= baudrate) ? (baudDiff - baudrate) : (baudrate - baudDiff);

    if(baudDiff < (baudrate / 100) * 3)
    {
        base->UFCR &= ~(0x380);
        base->UFCR |= ((refFreDiv << 7) & (0x380));
        base->UBIR = ((denominator - 1) << 0) & (0xffff);
        base->UBMR = (((numerator / divider -1) << 0) & 0xffff);
    }
}
#endif

/**
 * @brief initialized the io pin
 * 
 */
void uart1_io_init(void)
{
    *IOMUXC_SW_MUX_CTL_PAD_UART1_TX_DATA = IOMUXC_SW_MUX_CTL_PAD_UART1_TX_DATA_UART1_TX;
    *IOMUXC_SW_MUX_CTL_PAD_UART1_RX_DATA = IOMUXC_SW_MUX_CTL_PAD_UART1_RX_DATA_UART1_RX;

    *IOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA = IOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA_UART1_TX;
    *IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA = IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA_UART1_RX;
}

void uart1_USB_init(void)
{
    uart1_io_init();

    uart_disable(UART1_USBPort);
    uart_softreset(UART1_USBPort);
    UART1_USBPort->UCR1 = 0;
    UART1_USBPort->UCR1 &= ~(1 << 14);

    UART1_USBPort->UCR2 |= (1 << 14) | (1 << 5) | (1 << 2) | (1 << 1);
    UART1_USBPort->UCR3 |= (1 << 2);
    UART1_USBPort->UFCR = 5 << 7;
    UART1_USBPort->UBIR = 71;
    UART1_USBPort->UBMR = 3124;

    uart_enable(UART1_USBPort);
}