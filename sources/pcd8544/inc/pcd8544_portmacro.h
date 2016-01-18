#ifndef PCD8544_PORTMACRO
#define PCD8544_PORTMACRO

#define DELAY_VALUE_ALL 10

// RST - сброс. При низком уровне происходит аппаратный сброс контроллера
#define PIN_RST_H   GPIOA->ODR |= GPIO_ODR_0;
#define PIN_RST_L   GPIOA->ODR &= ~GPIO_ODR_0;

// CE - выбор чипа. Передача данных осуществляется при низком уровне на этой линии
#define PIN_CE_H    GPIOA->ODR |= GPIO_ODR_1;
#define PIN_CE_L    GPIOA->ODR &= ~GPIO_ODR_1;

// D/C- выбор типа передаваемых данных: высокий уровень - графические данные, низкий - инструкция
#define PIN_DC_H    GPIOA->ODR |= GPIO_ODR_2;
#define PIN_DC_L    GPIOA->ODR &= ~GPIO_ODR_2;

// DIN - передаваемые данные
#define PIN_DIN_H   GPIOA->ODR |= GPIO_ODR_3;
#define PIN_DIN_L   GPIOA->ODR &= ~GPIO_ODR_3;

// CLK - тактовый импульс для передачи данных
#define PIN_CLK_H   GPIOA->ODR |= GPIO_ODR_4;
#define PIN_CLK_L   GPIOA->ODR &= ~GPIO_ODR_4;

#define ASM_NOP     __ASM("nop")



// Delay
//------------------------------------------------------
void PCD8544_Delay(uint32_t value);


#endif // PCD8544_PORTMACRO
