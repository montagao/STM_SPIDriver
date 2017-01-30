/* 
 *
 *  @filename   spilib.h 
 *  @author     monta
 *  @date       Jan 29, 2017
 *
 *
 *  SPI Usage: 
 *
 *  1) Initialize Hardware Abstraction Layer (HAL), configure clock
 *  and other peripehrals.
 *
 *  2) Call H
 *
 */
 
#ifndef SPILIB_H_
#define SPILIB_H_


#include "stm32f0xx.h"

// Constants for SPI MODE configuration

#define SPI_MODE_0  (uint32_t)0x00000000
#define SPI_MODE_1  (uint32_t)0x00000001
#define SPI_MODE_2  (uint32_t)0x00000002
#define SPI_MODE_3  (uint32_t)0x00000003

#endif

