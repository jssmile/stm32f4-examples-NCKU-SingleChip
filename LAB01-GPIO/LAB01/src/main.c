#include "main.h"

int main()
{
    init();
    setSysTick();

    while(1) {
        loop();
    }
}

/*--------------Delay--------------*/
void SysTick_Handler(void)
{
    if(msTicks != 0)msTicks--;
}

void Delay(__IO uint32_t delaytime)
{
    msTicks = delaytime;
    while(msTicks != 0);
}

void setSysTick()
{
    //Interrupt 1000 times per second
    if(SysTick_Config(SystemCoreClock / 1000)) {
        while(1) {};
    }
}
/*--------------Delay--------------*/

/*--------------Initial LEDs--------------*/
void init()
{
    /*------------------------------------GPIO Configuration--------------------------------------------|
    |GPIO_Pin: Select which pins to initialize                                                          |
    |                                                                                                   |
    |GPIO_Mode: Mode of pins operation                                                                  |
    |    GPIO_Mode_IN:   Set pin to input                                                               |
    |    GPIO_Mode_OUT:  Set pin to be an Output                                                        |
    |    GPIO_Mode_AF:   Set pin to alternating function (to use with peripheral ex. SPI, USART, etc)   |
    |    GPIO_Mode_AN:   Set pin to be an analog (ADC or DAC)                                           |                   
    |                                                                                                   |
    |GPIO_OType: Mode for pin’s output type                                                             |
    |    GPIO_OType_PP:  Output type is push-pull                                                       |
    |    GPIO_OType_OD:  Output type is open drain                                                      |
    |                                                                                                   |
    |GPIO_PuPd: Select pull resistors or disable it                                                     |                                             
    |    GPIO_PuPd_UP:   Enable pull up resistor                                                        |
    |    GPIO_PuPd_DOWN: Enable pull down resistor                                                      |
    |    GPIO_PuPd_NOPULL: Disable pull resistor                                                        |
    |                                                                                                   |
    |GPIO_Speed: Select GPIO speed                                                                      |
    |    GPIO_Speed_100MHz                                                                              |
    |    GPIO_Speed_50MHz                                                                               |
    |    GPIO_Speed_25MHz                                                                               |
    |    GPIO_Speed_2MHz                                                                                |
    |------------------------------------GPIO Configuration--------------------------------------------*/

    /*
        Fill the code here!!!
    */

}
/*--------------Initial LEDs--------------*/

/*--------------Marquee--------------*/
void loop()
{
    /*
        Goal : To make the built Leds toggle.
        The pins of Leds have been declared in LAB01/inc/main.h
        Fill the code here!
    */
}
/*--------------Marquee--------------*/