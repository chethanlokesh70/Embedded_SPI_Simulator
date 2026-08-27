#include <stdio.h>
#include "spi_master.h"

int main()
{
    uint8_t tx = 0xA5;

    uint8_t rx = SPI_transfer(tx);

    printf("TX = 0x%X\n", tx);
    printf("RX = 0x%X\n", rx);

    return 0;
}