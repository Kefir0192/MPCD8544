#ifndef PCD8544
#define PCD8544



#define PCD8544_FUNCTION_SET (1<<5)
#define PCD8544_FUNCTION_PD  (1<<2)
#define PCD8544_FUNCTION_V   (1<<1)
#define PCD8544_FUNCTION_H   (1<<0)
/*---------------------------------------------------------------------------*/
#define PCD8544_DISPLAY_CONTROL (1<<3)
#define PCD8544_DISPLAY_CONTROL_D (1<<2)
#define PCD8544_DISPLAY_CONTROL_E (1<<0)
#define PCD8544_DISPLAY_CONTROL_BLANK 0
#define PCD8544_DISPLAY_CONTROL_NORMAL_MODE PCD8544_DISPLAY_CONTROL_D
#define PCD8544_DISPLAY_CONTROL_ALL_ON PCD8544_DISPLAY_CONTROL_E
#define PCD8544_DISPLAY_CONTROL_INVERSE (PCD8544_DISPLAY_CONTROL_D|PCD8544_DISPLAY_CONTROL_E)
/*---------------------------------------------------------------------------*/
#define PCD8544_SET_Y_ADDRESS (1<<6)
#define PCD8544_Y_ADRESS_MASK 0b111
#define PCD8544_SET_X_ADDRESS (1<<7)
#define PCD8544_X_ADRESS_MASK 0b01111111
/*---------------------------------------------------------------------------*/
#define PCD8544_TEMP_CONTROL (1<<2)
#define PCD8544_TEMP_TC1     (1<<1)
#define PCD8544_TEMP_TC0     (1<<0)
/*---------------------------------------------------------------------------*/
#define PCD8544_BIAS     (1<<4)
#define PCD8544_BIAS_BS2 (1<<2)
#define PCD8544_BIAS_BS1 (1<<1)
#define PCD8544_BIAS_BS0 (1<<0)
/*---------------------------------------------------------------------------*/
#define PCD8544_VOP (1<<7)
/*---------------------------------------------------------------------------*/
#define PCD8544_LINES 6
#define PCD8544_COLS  14
#define PCD8544_WIDTH  84
#define PCD8544_HEIGHT 48



// Write Byte
//------------------------------------------------------
void PCD8544_Write_Byte(uint8_t data);
// Write Data
//------------------------------------------------------
void PCD8544_Write_Data(uint8_t data);
// Write CMD
//------------------------------------------------------
void PCD8544_Write_CMD(uint8_t data);
// PCD8544 Init
//------------------------------------------------------
void PCD8544_Init(uint8_t contrast);
// Выбирает страницу и горизонтальную позицию для вывода
//------------------------------------------------------
void PCD8544_Display_Cursor(uint8_t Row_Y, uint8_t Column_X);
// PCD8544 Line Position
//------------------------------------------------------
void PCD8544_Line_Position(uint8_t line_position);
// PCD8544 Display Clear
//------------------------------------------------------
void PCD8544_Display_Clear(void);
// PCD8544 Write Char
//------------------------------------------------------
void PCD8544_Write_Char(uint8_t data);
// PCD8544 Write Small Num
//------------------------------------------------------
void PCD8544_Write_SmallNum(uint8_t num, uint8_t shift);

#endif // PCD8544

