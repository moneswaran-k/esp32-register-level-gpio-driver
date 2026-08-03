#include "timer.h"
void timer_init(void){
    TIMG0_T0CONFIG_REG &= ~(0xFFFFu << 13);
    TIMG0_T0CONFIG_REG |= (80u<<13);
    TIMG0_T0CONFIG_REG |= (1u << 31);
    TIMG0_T0CONFIG_REG |= (1u << 30);//We Can Also Use TIMG0_T0CONFIG_REG|=(3u << 30); for single line declaration 3u in binary 11 
}
void timer_reset(void){
    TIMG0_T0LOADHI_REG = 0;
    TIMG0_T0LOADLO_REG = 0 ;
    TIMG0_T0LOAD_REG = 1;
}
void delay_ms(uint32_t ms){
    timer_reset();
    uint32_t target_ticks= ms*1000;
    TIMG0_T0UPDATE_REG = 1;
    uint32_t ticks = TIMG0_T0LO_REG;
    while(ticks < target_ticks){
    TIMG0_T0UPDATE_REG = 1;
    ticks = TIMG0_T0LO_REG;}
}