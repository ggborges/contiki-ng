#ifndef ATMEGA328P_DEF_H
#define ATMEGA328P_DEF_H

/* Include AVR architecture definitions */
#include "arch/cpu/avr/avr-def.h"

/* Define the microcontroller */
#define MCU_NAME "ATmega328P"

/* CPU frequency (16 MHz for Arduino Uno) */
#define F_CPU 16000000UL

/* GPIO configuration */
#define LED_PIN PB5

/* UART configuration */
#define UART_BAUD_RATE 9600

#endif /* ATMEGA328P_DEF_H */