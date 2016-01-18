#include "globalincludefile.h"
#include "main.h"
#include "phisic.h"
#include "pcd8544_portmacro.h"
#include "pcd8544.h"



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
    //UART_Init(SP_9600);
    xdev_out(PCD8544_Write_Char);

    PIN_CE_L;

    // Delay init
    PCD8544_Delay(0x100);
    PCD8544_Init(0x29);
    PCD8544_Display_Clear();

    xprintf("Test");
    PCD8544_Line_Position(1);
    xprintf("Data out %d", 10);
    uint8_t counre = 0;
    while(1) {
        PCD8544_Line_Position(1);
        xprintf("Data out %-3d", counre++);
    }
}

