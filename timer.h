#ifndef timer_h
#define timer_h
#include <stdint.h>
#define TIMG0_T0CONFIG_REG (*(volatile uint32_t *)0x3FF5F000)
#define TIMG0_T0LO_REG (*(volatile uint32_t *)0x3FF5F004)
#define TIMG0_T0HI_REG (*(volatile uint32_t *)0x3FF5F008)
#define TIMG0_T0LOADLO_REG (*(volatile uint32_t *)0x3FF5F018)
#define TIMG0_T0LOADHI_REG (*(volatile uint32_t *)0x3FF5F01C)
#define TIMG0_T0LOAD_REG (*(volatile uint32_t *)0x3FF5F020)
#define TIMG0_T0UPDATE_REG (*(volatile uint32_t *)0x3FF5F00C)
void timer_init(void);
void timer_reset(void);
void delay_ms(int);
#endif
