#include "serial.h"

void serial_pin_init(void)
{
    IOMUXC_SetPinMux(IOMUXC_UART1_TX_DATA_UART1_TX, 0);
    IOMUXC_SetPinConfig(IOMUXC_UART1_TX_DATA_UART1_TX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_PKE_MASK);
    
    IOMUXC_SetPinMux(IOMUXC_UART1_RX_DATA_UART1_RX, 0);
    IOMUXC_SetPinConfig(IOMUXC_UART1_RX_DATA_UART1_RX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_PKE_MASK);
}


void serial_init()
{
    uart_config_t config;
    uint32_t srcfreq;
    uint8_t txbuff[] = "Serial use uart polling type.\r\nBoard will send back received characters\r\n";

    serial_pin_init();

    /*
     * config.baudRate_Bps = 115200U;
     * config.parityMode = kUART_ParityDisabled;
     * config.dataBitsCount = kUART_EightDataBits;
     * config.stopBitCount = kUART_OneStopBit;
     * config.txFifoWatermark = 2;
     * config.rxFifoWatermark = 1;
     * uartConfig->enableAutoBaudrate = flase;
     * config.enableTx = false;
     * config.enableRx = false;
     */
    UART_GetDefaultConfig(&config);
    config.baudRate_Bps = SERIAL_BAUDRATE;
    config.enableTx = true;
    config.enableRx = true;

    srcfreq = serial_clockSrcFreq();

    UART_Init(SERIAL_UART, &config, srcfreq);
    UART_WriteBlocking(SERIAL_UART, txbuff, sizeof(txbuff)-1);
}


uint32_t serial_clockSrcFreq()
{
    uint32_t freq;

    if(CLOCK_GetMux(kCLOCK_UartMux) == 0)
    {
        freq = (CLOCK_GetPllFreq(kCLOCK_PllUsb1) / 6U) / (CLOCK_GetDiv(kCLOCK_UartDiv) + 1);
    }
    else
    {
        freq = CLOCK_GetOscFreq() / (CLOCK_GetDiv(kCLOCK_UartDiv) + 1);
    }

    return freq;
}


void putc(unsigned char c)
{
    UART_WriteBlocking(SERIAL_UART, &c, 1);
}


void puts(char *str)
{
    char *p = str;
    while (*p)
    {   
        putc(*p++);
    }
}


unsigned char getc()
{
    unsigned char ch;
    
    switch (UART_ReadBlocking(SERIAL_UART, &ch, 1))
    {
    case kStatus_UART_ParityError:
        puts("Parity error happened!");
        break;
    case kStatus_UART_FramingError:
        puts("Framing error happened!");
        break;
    case kStatus_UART_RxHardwareOverrun:
        puts("RX fifo over run happened!");
        break;
    case kStatus_Success:
        return ch;
        break;
    }

    return 0;
}