#include<stdint.h>
#define GPIO_OUT_REG (*(volatile uint32_t *)0x3FF44004)
#define GPIO_OUT_W1TS_REG (*(volatile uint32_t *)0x3FF44008)
#define GPIO_OUT_W1TC_REG (*(volatile uint32_t *)0x3FF4400C)
#define GPIO_ENABLE_REG (*(volatile uint32_t *)0x3FF44020)
#define IO_MUX_GPIO2_REG (*(volatile uint32_t *)0x3FF49040)

void gpio_init_output(uint8_t pin){
    IO_MUX_GPIO2_REG &= ~(7U << 12);
    IO_MUX_GPIO2_REG |=  (2U << 12);
    GPIO_ENABLE_REG |= (1U << pin);
}

void gpio_set(uint8_t pin){
    GPIO_OUT_W1TS_REG = (1u << pin);
}

void gpio_clear(uint8_t pin){
    GPIO_OUT_W1TC_REG = (1u << pin);
}

int app_main(void){
    gpio_init_output(2);
    while(1){
        gpio_set(2);
        for(volatile uint32_t i=0;i<100000;i++);
        gpio_clear(2);
        for(volatile uint32_t i=0;i<100000;i++);
    }
}