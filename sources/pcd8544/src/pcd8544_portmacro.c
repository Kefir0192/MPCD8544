#include "globalincludefile.h"
#include "pcd8544_portmacro.h"
#include "pcd8544.h"



//------------------------------------------------------
// Delay
//------------------------------------------------------
void PCD8544_Delay(uint32_t value)
{
    while(value--) ASM_NOP;
}

