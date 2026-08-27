#include "spi_master.h"
#include "spi_slave.h"

static uint8_t response = 0x5A;
static int bit_index = 7;

uint8_t Slave_processBit(uint8_t mosi_bit){
    uint8_t miso_bit;

    miso_bit = (response >> bit_index) & 1;
    bit_index--;

    if(bit_index < 0)
        bit_index = 7;

    return miso_bit;
}
