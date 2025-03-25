#ifndef ATMEGA328P_CONF_H
#define ATMEGA328P_CONF_H

/* Include the base AVR configuration */
#include "arch/cpu/avr/avr-def.h"

/* Low Power Mode Configuration */
#ifndef LPM_CONF_ENABLED
#define LPM_CONF_ENABLED 0
#endif

/* UART configuration */
#ifndef UART_CONF_ENABLE
#define UART_CONF_ENABLE 1
#endif

/* Maximum number of processes */
#ifndef PROCESS_CONF_NUMEVENTS
#define PROCESS_CONF_NUMEVENTS 8
#endif

#ifndef PROCESS_CONF_NUMPROCESS
#define PROCESS_CONF_NUMPROCESS 4
#endif

#endif /* ATMEGA328P_CONF_H */