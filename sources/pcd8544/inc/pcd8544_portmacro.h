#ifndef PCD8544_PORTMACRO
#define PCD8544_PORTMACRO

#define DELAY_VALUE_ALL 500

#define PIN_RS_H    GPIOC->ODR |= GPIO_ODR_0;
#define PIN_RS_L    GPIOC->ODR &= ~GPIO_ODR_0;

#define PIN_E_H     GPIOC->ODR |= GPIO_ODR_1;
#define PIN_E_L     GPIOC->ODR &= ~GPIO_ODR_1;

#define PIN_SH_H    GPIOA->ODR |= GPIO_ODR_0;
#define PIN_SH_L    GPIOA->ODR &= ~GPIO_ODR_0;

#define PIN_ST_H    GPIOA->ODR |= GPIO_ODR_1;
#define PIN_ST_L    GPIOA->ODR &= ~GPIO_ODR_1;

#define PIN_DS_H    GPIOA->ODR |= GPIO_ODR_2;
#define PIN_DS_L    GPIOA->ODR &= ~GPIO_ODR_2;

#define ASM_NOP     __ASM("nop")



// Delay
//------------------------------------------------------
void PCD8544_Delay(uint32_t value);


#endif // PCD8544_PORTMACRO
