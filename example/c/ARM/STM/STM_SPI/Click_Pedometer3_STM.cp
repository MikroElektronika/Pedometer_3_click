#line 1 "D:/Clicks_git/P/Pedometer_3_click/SW/example/c/ARM/STM/STM_SPI/Click_Pedometer3_STM.c"
#line 1 "d:/clicks_git/p/pedometer_3_click/sw/example/c/arm/stm/stm_spi/click_pedometer3_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/p/pedometer_3_click/sw/example/c/arm/stm/stm_spi/click_pedometer3_config.h"
#line 1 "d:/clicks_git/p/pedometer_3_click/sw/example/c/arm/stm/stm_spi/click_pedometer3_types.h"
#line 3 "d:/clicks_git/p/pedometer_3_click/sw/example/c/arm/stm/stm_spi/click_pedometer3_config.h"
const uint32_t _PEDOMETER3_SPI_CFG[ 2 ] =
{
 _SPI_FPCLK_DIV256,
 _SPI_FIRST_CLK_EDGE_TRANSITION |
 _SPI_CLK_IDLE_LOW |
 _SPI_MASTER |
 _SPI_MSB_FIRST |
 _SPI_8_BIT |
 _SPI_SSM_ENABLE |
 _SPI_SS_DISABLE |
 _SPI_SSI_1
};

const uint32_t _PEDOMETER3_I2C_CFG[ 1 ] =
{
 100000
};
#line 31 "D:/Clicks_git/P/Pedometer_3_click/SW/example/c/ARM/STM/STM_SPI/Click_Pedometer3_STM.c"
int16_t X_accelAxis;
int16_t Y_accelAxis;
int16_t Z_accelAxis;
int16_t X_hpAxis;
int16_t Y_hpAxis;
int16_t Z_hpAxis;

uint8_t CurrentTiltPosition;
uint8_t PreviousTiltPosition;

uint16_t pedStep;
char demoText[ 50 ];

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
 mikrobus_spiInit( _MIKROBUS1, &_PEDOMETER3_SPI_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 115200 );
 mikrobus_logWrite(" --- System Init --- ", _LOG_LINE);
 Delay_ms( 100 );
}

void applicationInit()
{
 pedometer3_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );
 pedometer3_startConfiguration();
 pedometer3_writeByte(_PEDOMETER3_REG_CONTROL_1, _PEDOMETER3_CNTL1_MODE_LOW_POWER |
 _PEDOMETER3_CNTL1_RES_MODE_LOWER_NOISE |
 _PEDOMETER3_CNTL1_DATA_READY_DISABLE |
 _PEDOMETER3_CNTL1_G_RANGE_2g |
 _PEDOMETER3_CNTL1_TAP_ENABLE |
 _PEDOMETER3_CNTL1_PEDOMETER_ENABLE |
 _PEDOMETER3_CNTL1_TILT_ENABLE );
 pedometer3_testCommunication();
 Delay_1sec();
}

void applicationTask()
{
 pedometer3_getAccelAxis( &X_accelAxis, &Y_accelAxis, &Z_accelAxis );
 pedometer3_getHighPassAccelAxis( &X_hpAxis, &Y_hpAxis, &Z_hpAxis );
 pedStep += pedometer3_getPedometerStepCounter();

 mikrobus_logWrite("|___________ Pedometer 3 click _____________|", _LOG_LINE );
 mikrobus_logWrite("|  Data    |  X axis  |  Y axis  |  Z axis  |", _LOG_LINE );
 mikrobus_logWrite("|  Accel   |", _LOG_TEXT );
 IntToStr(X_accelAxis, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("    |", _LOG_TEXT);
 IntToStr(Y_accelAxis, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("    |", _LOG_TEXT);
 IntToStr(Z_accelAxis, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("    |", _LOG_LINE);
 mikrobus_logWrite("| HP Accel |", _LOG_TEXT );
 IntToStr(X_hpAxis, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("    |", _LOG_TEXT);
 IntToStr(Y_hpAxis, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("    |", _LOG_TEXT);
 IntToStr(Z_hpAxis, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("    |", _LOG_LINE);
 mikrobus_logWrite("|___________________________________________|", _LOG_LINE );
 mikrobus_logWrite("| Pedometer step counter :", _LOG_TEXT );
 IntToStr(pedStep, demoText);
 mikrobus_logWrite(demoText, _LOG_TEXT);
 mikrobus_logWrite("            |", _LOG_LINE);
 mikrobus_logWrite("|___________________________________________|", _LOG_LINE );

 pedometer3_getTiltPosition(&CurrentTiltPosition, &PreviousTiltPosition);
 mikrobus_logWrite("| Current Tilt Position  :", _LOG_TEXT );
 switch(CurrentTiltPosition)
 {
 case 1:
 {
 mikrobus_logWrite("- LEFT            |", _LOG_LINE );
 break;
 }
 case 2:
 {
 mikrobus_logWrite("- RIGHT           |", _LOG_LINE );
 break;
 }
 case 3:
 {
 mikrobus_logWrite("- DOWN            |", _LOG_LINE );
 break;
 }
 case 4:
 {
 mikrobus_logWrite("- UP              |", _LOG_LINE );
 break;
 }
 case 5:
 {
 mikrobus_logWrite("- FACE DOWN       |", _LOG_LINE );
 break;
 }
 case 6:
 {
 mikrobus_logWrite("- FACE UP         |", _LOG_LINE );
 break;
 }
 }
 mikrobus_logWrite("|___________________________________________|", _LOG_LINE );

 mikrobus_logWrite("  ", _LOG_LINE);
 Delay_ms( 400 );
}

void main()
{
 systemInit();
 applicationInit();

 while (1)
 {
 applicationTask();
 }
}
