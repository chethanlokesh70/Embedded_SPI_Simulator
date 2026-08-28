#include "spi_master.h"
#include "spi_slave.h"

uint8_t MISO = 0;
uint8_t MOSI = 0;
uint8_t SCLK = 0;
uint8_t CS = 1;

uint8_t SPI_transfer(uint8_t data){
    uint8_t rx_data = 0;
    CS = 0;

    for(int i=7; i>=0; i--){
        MOSI = (data>>i) & 1;
        SCLK = 1;
        MISO = Slave_processBit(MOSI);
        rx_data |= (MISO << i);
        SCLK = 0;
    }
    CS = 1;
    return rx_data;
}
