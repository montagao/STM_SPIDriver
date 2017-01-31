/* *
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

/* Constants for SPI MODE configuration
 *
 * PHASE = 0 means data is sampled (latched) at second clock edge
 * whereas PHASE = 1 means data is sampled at the first clock edge
 *
 * POLARITY = 0 means that the clock idles at Low and is Active on 
 * whereas POLARITY  = 1 means that the clock idles at Active
 *
 */
#define SPI_MODE_0  (uint32_t)0x00000000 /* PHASE = 0, POL = 0*/
#define SPI_MODE_1  (uint32_t)0x00000001 /* PHASE = 0, POL = 1*/
#define SPI_MODE_2  (uint32_t)0x00000002 /* PHASE = 1, POL = 0*/
#define SPI_MODE_3  (uint32_t)0x00000003 /* PHASE = 1, POL = 1*/


// CONSTANTS FOR SPI BUS CONFIGURATION
// GPIO PORT B
#define SPI_GPIO_SCK GPIO_PIN_13
#define SPI_GPIO_MISO GPIO_PIN_14 
#define SPI_GPIO_MOSI GPIO_PIN_15
#define SPI_GPIO_PORT GPIOB

#define SPI_MODE_DEFAULT SPI_MODE_0




#endif

