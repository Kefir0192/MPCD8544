#ifndef PCD8544_PORTMACRO
#define PCD8544_PORTMACRO

#define DELAY_VALUE_ALL 10

// RST - �����. ��� ������ ������ ���������� ���������� ����� �����������
#define PIN_RST_H   GPIOA->ODR |= GPIO_ODR_0;
#define PIN_RST_L   GPIOA->ODR &= ~GPIO_ODR_0;

// CE - ����� ����. �������� ������ �������������� ��� ������ ������ �� ���� �����
#define PIN_CE_H    GPIOA->ODR |= GPIO_ODR_1;
#define PIN_CE_L    GPIOA->ODR &= ~GPIO_ODR_1;

// D/C- ����� ���� ������������ ������: ������� ������� - ����������� ������, ������ - ����������
#define PIN_DC_H    GPIOA->ODR |= GPIO_ODR_2;
#define PIN_DC_L    GPIOA->ODR &= ~GPIO_ODR_2;

// DIN - ������������ ������
#define PIN_DIN_H   GPIOA->ODR |= GPIO_ODR_3;
#define PIN_DIN_L   GPIOA->ODR &= ~GPIO_ODR_3;

// CLK - �������� ������� ��� �������� ������
#define PIN_CLK_H   GPIOA->ODR |= GPIO_ODR_4;
#define PIN_CLK_L   GPIOA->ODR &= ~GPIO_ODR_4;

#define ASM_NOP     __ASM("nop")



// Delay
//------------------------------------------------------
void PCD8544_Delay(uint32_t value);


#endif // PCD8544_PORTMACRO
