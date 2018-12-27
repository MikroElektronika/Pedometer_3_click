_systemInit:
;Click_Pedometer3_PIC32.c,32 :: 		void systemInit()
ADDIU	SP, SP, -16
SW	RA, 0(SP)
;Click_Pedometer3_PIC32.c,34 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
SW	R25, 4(SP)
SW	R26, 8(SP)
SW	R27, 12(SP)
ORI	R27, R0, 1
ORI	R26, R0, 7
MOVZ	R25, R0, R0
JAL	_mikrobus_gpioInit+0
NOP	
;Click_Pedometer3_PIC32.c,35 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_INPUT );
ORI	R27, R0, 1
MOVZ	R26, R0, R0
MOVZ	R25, R0, R0
JAL	_mikrobus_gpioInit+0
NOP	
;Click_Pedometer3_PIC32.c,36 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_INPUT );
ORI	R27, R0, 1
ORI	R26, R0, 1
MOVZ	R25, R0, R0
JAL	_mikrobus_gpioInit+0
NOP	
;Click_Pedometer3_PIC32.c,37 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVZ	R27, R0, R0
ORI	R26, R0, 2
MOVZ	R25, R0, R0
JAL	_mikrobus_gpioInit+0
NOP	
;Click_Pedometer3_PIC32.c,38 :: 		mikrobus_i2cInit( _MIKROBUS1, &_PEDOMETER3_I2C_CFG[0] );
LUI	R2, hi_addr(__PEDOMETER3_I2C_CFG+0)
ORI	R2, R2, lo_addr(__PEDOMETER3_I2C_CFG+0)
MOVZ	R26, R2, R0
MOVZ	R25, R0, R0
JAL	_mikrobus_i2cInit+0
NOP	
;Click_Pedometer3_PIC32.c,39 :: 		mikrobus_logInit( _LOG_USBUART_A, 115200 );
LUI	R26, 1
ORI	R26, R26, 49664
ORI	R25, R0, 32
JAL	_mikrobus_logInit+0
NOP	
;Click_Pedometer3_PIC32.c,40 :: 		mikrobus_logWrite(" --- System Init --- ", _LOG_LINE);
ORI	R26, R0, 2
LUI	R25, hi_addr(?lstr1_Click_Pedometer3_PIC32+0)
ORI	R25, R25, lo_addr(?lstr1_Click_Pedometer3_PIC32+0)
JAL	_mikrobus_logWrite+0
NOP	
;Click_Pedometer3_PIC32.c,41 :: 		Delay_ms( 100 );
LUI	R24, 40
ORI	R24, R24, 45226
L_systemInit0:
ADDIU	R24, R24, -1
BNE	R24, R0, L_systemInit0
NOP	
;Click_Pedometer3_PIC32.c,42 :: 		}
L_end_systemInit:
LW	R27, 12(SP)
LW	R26, 8(SP)
LW	R25, 4(SP)
LW	RA, 0(SP)
ADDIU	SP, SP, 16
JR	RA
NOP	
; end of _systemInit
_applicationInit:
;Click_Pedometer3_PIC32.c,44 :: 		void applicationInit()
ADDIU	SP, SP, -16
SW	RA, 0(SP)
;Click_Pedometer3_PIC32.c,46 :: 		pedometer3_i2cDriverInit( (T_PEDOMETER3_P)&_MIKROBUS1_GPIO, (T_PEDOMETER3_P)&_MIKROBUS1_I2C, 0x1F );
SW	R25, 4(SP)
SW	R26, 8(SP)
SW	R27, 12(SP)
ORI	R27, R0, 31
LUI	R26, hi_addr(__MIKROBUS1_I2C+0)
ORI	R26, R26, lo_addr(__MIKROBUS1_I2C+0)
LUI	R25, hi_addr(__MIKROBUS1_GPIO+0)
ORI	R25, R25, lo_addr(__MIKROBUS1_GPIO+0)
JAL	_pedometer3_i2cDriverInit+0
NOP	
;Click_Pedometer3_PIC32.c,47 :: 		pedometer3_writeByte(0x7F, 0x00);
MOVZ	R26, R0, R0
ORI	R25, R0, 127
JAL	_pedometer3_writeByte+0
NOP	
;Click_Pedometer3_PIC32.c,48 :: 		Delay_10ms();
JAL	_Delay_10ms+0
NOP	
;Click_Pedometer3_PIC32.c,49 :: 		pedometer3_writeByte(0x1B, 0x00);
MOVZ	R26, R0, R0
ORI	R25, R0, 27
JAL	_pedometer3_writeByte+0
NOP	
;Click_Pedometer3_PIC32.c,50 :: 		Delay_100ms();
JAL	_Delay_100ms+0
NOP	
;Click_Pedometer3_PIC32.c,51 :: 		pedometer3_writeByte(0x1B, 0x80);
ORI	R26, R0, 128
ORI	R25, R0, 27
JAL	_pedometer3_writeByte+0
NOP	
;Click_Pedometer3_PIC32.c,52 :: 		Delay_1sec();
JAL	_Delay_1sec+0
NOP	
;Click_Pedometer3_PIC32.c,54 :: 		readReg = pedometer3_readByte(0x11);
ORI	R25, R0, 17
JAL	_pedometer3_readByte+0
NOP	
SB	R2, Offset(_readReg+0)(GP)
;Click_Pedometer3_PIC32.c,55 :: 		IntToHex(readReg, demoText);
LUI	R26, hi_addr(_demoText+0)
ORI	R26, R26, lo_addr(_demoText+0)
ANDI	R25, R2, 255
JAL	_IntToHex+0
NOP	
;Click_Pedometer3_PIC32.c,56 :: 		mikrobus_logWrite(" Who am I :  ", _LOG_TEXT);
ORI	R26, R0, 1
LUI	R25, hi_addr(?lstr2_Click_Pedometer3_PIC32+0)
ORI	R25, R25, lo_addr(?lstr2_Click_Pedometer3_PIC32+0)
JAL	_mikrobus_logWrite+0
NOP	
;Click_Pedometer3_PIC32.c,57 :: 		mikrobus_logWrite(demoText, _LOG_LINE);
ORI	R26, R0, 2
LUI	R25, hi_addr(_demoText+0)
ORI	R25, R25, lo_addr(_demoText+0)
JAL	_mikrobus_logWrite+0
NOP	
;Click_Pedometer3_PIC32.c,58 :: 		}
L_end_applicationInit:
LW	R27, 12(SP)
LW	R26, 8(SP)
LW	R25, 4(SP)
LW	RA, 0(SP)
ADDIU	SP, SP, 16
JR	RA
NOP	
; end of _applicationInit
_applicationTask:
;Click_Pedometer3_PIC32.c,60 :: 		void applicationTask()
ADDIU	SP, SP, -4
;Click_Pedometer3_PIC32.c,63 :: 		}
L_end_applicationTask:
ADDIU	SP, SP, 4
JR	RA
NOP	
; end of _applicationTask
_main:
;Click_Pedometer3_PIC32.c,65 :: 		void main()
ADDIU	SP, SP, -4
;Click_Pedometer3_PIC32.c,67 :: 		systemInit();
JAL	_systemInit+0
NOP	
;Click_Pedometer3_PIC32.c,68 :: 		applicationInit();
JAL	_applicationInit+0
NOP	
;Click_Pedometer3_PIC32.c,70 :: 		while (1)
L_main2:
;Click_Pedometer3_PIC32.c,72 :: 		applicationTask();
JAL	_applicationTask+0
NOP	
;Click_Pedometer3_PIC32.c,73 :: 		}
J	L_main2
NOP	
;Click_Pedometer3_PIC32.c,74 :: 		}
L_end_main:
L__main_end_loop:
J	L__main_end_loop
NOP	
; end of _main
