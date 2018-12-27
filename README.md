![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Pedometer3 Click

- **CIC Prefix**  : PEDOMETER3
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : sep 2018.

---


### Software Support

We provide a library for the Pedometer3 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2586/pedometer-3-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library initializes and defines the I2C or SPI bus driver and drivers that offer a choice for writing data in register and reads data form register.
The library includes function for read Accel X/Y/Z axis data, function for read pedometer stem counter, function for detect Tilt and Tap.
The user also has the functions for configuration device functions for reads interrupt states.

Key functions :

- ``` void pedometer3_getAccelAxis(int16_t *x_axis, int16_t *y_axis, int16_t *z_axis) ``` - Functions for read Accel axis data
- ``` uint16_t pedometer3_getPedometerStepCounter() ``` - Functions for get pedometer step counter
- ``` void pedometer3_getTiltPosition(uint8_t *current_pos, uint8_t *previous_pos) ``` - Functions for get Tilt current and previous position
- ``` void pedometer3_getTapDetection(uint8_t *tap) ``` - Functions for get Tap detection

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes I2C module and sets INT pin, AN pin and RST pin as INPUT and CS pin as OUTPUT
- Application Initialization - Initialization driver init and  start configuration chip for measurement
- Application Task - (code snippet) - Reads Accel and High Pass Accel X/Y/Z axis and detect Tilt Position.
                                      All data logs on the USBUART every 500 ms.
- note
    The start configuration chip is required at the beginning of each program so that the chip wakes up and prepares for operation and measurement.
    What is included and set in the start-up function can be viewed in the help file.


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2586/pedometer-3-click) page.

Other mikroE Libraries used in the example:

- I2C

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
