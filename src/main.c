#include <stdbool.h>
#include <stm8s.h>
#include <stdio.h>
#include "main.h"
#include "milis.h"
// #include "delay.h"
// #include "uart1.h"
#include "daughterboard.h"
#include "uart1.h"

void init(void)
{
    CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1); // taktovani MCU na 16MHz
    init_milis();
    init_uart1();

    GPIO_Init(LED6_PORT, LED6_PIN, GPIO_MODE_OUT_PP_LOW_SLOW);
}


int main(void)
{
    uint32_t time = 0;
    extern uint16_t led6time;
    
    init();

    while (1) {
        if (milis() - time > led6time){
            time = milis();

            REVERSE(LED6);
            printf("%ld\n", time);
        }
    }
}

/*-------------------------------  Assert -----------------------------------*/
#include "__assert__.h"
