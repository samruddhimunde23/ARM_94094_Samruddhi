

#include"my_led.h"
volatile int ext_flag=0;
void extint_init(void)
{
    // 1. Enable AHB1 clock for GPIOA
    RCC->AHB1ENR |= BV(0);

    // 2.PA0 as input mode
    GPIOA->MODER &= ~(BV(0) | BV(1));

    // 3. Disable internal pull-up / pull-down on PA0
    GPIOA->PUPDR &= ~(BV(0) | BV(1));

    //  4.  Clearing bits selects Port A for EXTI0
    SYSCFG->EXTICR[0] &= ~(BV(0) | BV(1) | BV(2) | BV(3));

    //  5.  Unmask EXTI0 interrupt
    EXTI->IMR |= BV(0);

    //    Enable rising-edge trigger on EXTI0
    EXTI->RTSR |= BV(0);

    // 6. Enable EXTI0 interrupt in NVIC
    NVIC_EnableIRQ(EXTI0_IRQn);
}

void EXTI0_IRQHandler(void)
{
    //  Clear the pending interrupt flag for EXTI line 0
    EXTI->PR |= BV(0);


    ext_flag=1;
}
