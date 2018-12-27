/*
Example for Pedometer3 Click

    Date          : sep 2018.
    Author        : Katarina Perendic

Test configuration dsPIC :
    
    MCU                : P33FJ256GP710A
    Dev. Board         : EasyPIC Fusion v7
    dsPIC Compiler ver : v7.1.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes SPI module and sets INT pin, AN pin and RST pin as INPUT and CS pin as OUTPUT
- Application Initialization - Initialization driver init and  start configuration chip for measurement
- Application Task - (code snippet) - Reads Accel and High Pass Accel X/Y/Z axis and detect Tilt Position.
                                      All data logs on the USBUART every 500 ms.
- note
    The start configuration chip is required at the beginning of each program so that the chip wakes up and prepares for operation and measurement. 
    What is included and set in the start-up function can be viewed in the help file.
*/

#include "Click_Pedometer3_types.h"
#include "Click_Pedometer3_config.h"

int16_t X_accelAxis;
int16_t Y_accelAxis;
int16_t Z_accelAxis;
int16_t X_hpAxis;
int16_t Y_hpAxis;
int16_t Z_hpAxis;

uint8_t CurrentTiltPosition;
uint8_t PreviousTiltPosition;

uint16_t pedStep = 0;
char demoText[ 50 ];

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN,  _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN,  _GPIO_OUTPUT );
    mikrobus_spiInit( _MIKROBUS1, &_PEDOMETER3_SPI_CFG[0] );
    mikrobus_logInit( _LOG_USBUART_A, 9600 );
    mikrobus_logWrite(" --- System Init --- ", _LOG_LINE);
    Delay_ms( 100 );
}

void applicationInit()
{
    pedometer3_spiDriverInit( (T_PEDOMETER3_P)&_MIKROBUS1_GPIO, (T_PEDOMETER3_P)&_MIKROBUS1_SPI );
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