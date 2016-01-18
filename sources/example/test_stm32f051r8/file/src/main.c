#include "globalincludefile.h"
#include "main.h"
#include "phisic.h"
#include "pcd8544.h"
#include "pcd8544_portmacro.h"




//------------------------------------------------------
// Hardware initialization
//------------------------------------------------------
void Hardware_Init(void)
{
    // Initialize oscillator
    Oscillator_Init();
    // Initialization GPIO
    Port_Init();
    // enable irq
    __enable_irq();
}

//------------------------------------------------------
// MAIN
//------------------------------------------------------
int main(void)
{
    // Hardware initialization
    Hardware_Init();
    UART_Init(SP_9600);
    //xdev_out(lcd_putc);

    // Delay init

    xprintf("Test");


    while(1) {

    }
}

