#ifndef __BSP_DELAY_H
#define __BSP_DELAY_H
#include "imx6u.h"
void delay_init(void);
void gpt1_irq_handler(unsigned int gicciar,void *param);
void delay_short(volatile unsigned int n);
void delay_ms(volatile unsigned int n);

#endif