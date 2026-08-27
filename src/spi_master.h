#ifndef SPI_MASTER_H
#define SPI_MASTER_H

#include <stdint.h>

extern uint8_t MOSI;
extern uint8_t MISO;
extern uint8_t SCLK;
extern uint8_t CS;

uint8_t SPI_transfer(uint8_t data);

#endif