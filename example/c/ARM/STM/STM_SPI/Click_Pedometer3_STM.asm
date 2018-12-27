_systemInit:
;Click_Pedometer3_STM.c,46 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Pedometer3_STM.c,48 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #7
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Pedometer3_STM.c,49 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN,  _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #0
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Pedometer3_STM.c,50 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #1
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Pedometer3_STM.c,51 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN,  _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Pedometer3_STM.c,52 :: 		mikrobus_spiInit( _MIKROBUS1, &_PEDOMETER3_SPI_CFG[0] );
MOVW	R0, #lo_addr(__PEDOMETER3_SPI_CFG+0)
MOVT	R0, #hi_addr(__PEDOMETER3_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_spiInit+0
;Click_Pedometer3_STM.c,53 :: 		mikrobus_logInit( _LOG_USBUART_A, 115200 );
MOV	R1, #115200
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_Pedometer3_STM.c,54 :: 		mikrobus_logWrite(" --- System Init --- ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr1_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,55 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_Pedometer3_STM.c,56 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_Pedometer3_STM.c,58 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Pedometer3_STM.c,60 :: 		pedometer3_spiDriverInit( (T_PEDOMETER3_P)&_MIKROBUS1_GPIO, (T_PEDOMETER3_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_pedometer3_spiDriverInit+0
;Click_Pedometer3_STM.c,61 :: 		pedometer3_startConfiguration();
BL	_pedometer3_startConfiguration+0
;Click_Pedometer3_STM.c,63 :: 		_PEDOMETER3_CNTL1_RES_MODE_LOWER_NOISE |
MOVS	R0, __PEDOMETER3_CNTL1_MODE_LOW_POWER
ORR	R0, R0, __PEDOMETER3_CNTL1_RES_MODE_LOWER_NOISE
UXTB	R0, R0
;Click_Pedometer3_STM.c,64 :: 		_PEDOMETER3_CNTL1_DATA_READY_DISABLE |
ORR	R0, R0, __PEDOMETER3_CNTL1_DATA_READY_DISABLE
UXTB	R0, R0
;Click_Pedometer3_STM.c,65 :: 		_PEDOMETER3_CNTL1_G_RANGE_2g |
ORR	R0, R0, __PEDOMETER3_CNTL1_G_RANGE_2g
UXTB	R0, R0
;Click_Pedometer3_STM.c,66 :: 		_PEDOMETER3_CNTL1_TAP_ENABLE |
ORR	R0, R0, __PEDOMETER3_CNTL1_TAP_ENABLE
UXTB	R0, R0
;Click_Pedometer3_STM.c,67 :: 		_PEDOMETER3_CNTL1_PEDOMETER_ENABLE |
ORR	R0, R0, __PEDOMETER3_CNTL1_PEDOMETER_ENABLE
UXTB	R0, R0
;Click_Pedometer3_STM.c,68 :: 		_PEDOMETER3_CNTL1_TILT_ENABLE );
ORR	R0, R0, __PEDOMETER3_CNTL1_TILT_ENABLE
UXTB	R1, R0
;Click_Pedometer3_STM.c,62 :: 		pedometer3_writeByte(_PEDOMETER3_REG_CONTROL_1, _PEDOMETER3_CNTL1_MODE_LOW_POWER |
MOVS	R0, __PEDOMETER3_REG_CONTROL_1
;Click_Pedometer3_STM.c,68 :: 		_PEDOMETER3_CNTL1_TILT_ENABLE );
BL	_pedometer3_writeByte+0
;Click_Pedometer3_STM.c,69 :: 		pedometer3_testCommunication();
BL	_pedometer3_testCommunication+0
;Click_Pedometer3_STM.c,70 :: 		Delay_1sec();
BL	_Delay_1sec+0
;Click_Pedometer3_STM.c,71 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_Pedometer3_STM.c,73 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Pedometer3_STM.c,75 :: 		pedometer3_getAccelAxis( &X_accelAxis, &Y_accelAxis, &Z_accelAxis );
MOVW	R2, #lo_addr(_Z_accelAxis+0)
MOVT	R2, #hi_addr(_Z_accelAxis+0)
MOVW	R1, #lo_addr(_Y_accelAxis+0)
MOVT	R1, #hi_addr(_Y_accelAxis+0)
MOVW	R0, #lo_addr(_X_accelAxis+0)
MOVT	R0, #hi_addr(_X_accelAxis+0)
BL	_pedometer3_getAccelAxis+0
;Click_Pedometer3_STM.c,76 :: 		pedometer3_getHighPassAccelAxis( &X_hpAxis, &Y_hpAxis, &Z_hpAxis );
MOVW	R2, #lo_addr(_Z_hpAxis+0)
MOVT	R2, #hi_addr(_Z_hpAxis+0)
MOVW	R1, #lo_addr(_Y_hpAxis+0)
MOVT	R1, #hi_addr(_Y_hpAxis+0)
MOVW	R0, #lo_addr(_X_hpAxis+0)
MOVT	R0, #hi_addr(_X_hpAxis+0)
BL	_pedometer3_getHighPassAccelAxis+0
;Click_Pedometer3_STM.c,77 :: 		pedStep += pedometer3_getPedometerStepCounter();
BL	_pedometer3_getPedometerStepCounter+0
MOVW	R2, #lo_addr(_pedStep+0)
MOVT	R2, #hi_addr(_pedStep+0)
LDRH	R1, [R2, #0]
ADDS	R0, R1, R0
STRH	R0, [R2, #0]
;Click_Pedometer3_STM.c,79 :: 		mikrobus_logWrite("|___________ Pedometer 3 click _____________|", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr2_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,80 :: 		mikrobus_logWrite("|  Data    |  X axis  |  Y axis  |  Z axis  |", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr3_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr3_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,81 :: 		mikrobus_logWrite("|  Accel   |", _LOG_TEXT );
MOVW	R0, #lo_addr(?lstr4_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr4_Click_Pedometer3_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,82 :: 		IntToStr(X_accelAxis, demoText);
MOVW	R0, #lo_addr(_X_accelAxis+0)
MOVT	R0, #hi_addr(_X_accelAxis+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Pedometer3_STM.c,83 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,84 :: 		mikrobus_logWrite("    |", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr5_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr5_Click_Pedometer3_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,85 :: 		IntToStr(Y_accelAxis, demoText);
MOVW	R0, #lo_addr(_Y_accelAxis+0)
MOVT	R0, #hi_addr(_Y_accelAxis+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Pedometer3_STM.c,86 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,87 :: 		mikrobus_logWrite("    |", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr6_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr6_Click_Pedometer3_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,88 :: 		IntToStr(Z_accelAxis, demoText);
MOVW	R0, #lo_addr(_Z_accelAxis+0)
MOVT	R0, #hi_addr(_Z_accelAxis+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Pedometer3_STM.c,89 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,90 :: 		mikrobus_logWrite("    |", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr7_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr7_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,91 :: 		mikrobus_logWrite("| HP Accel |", _LOG_TEXT );
MOVW	R0, #lo_addr(?lstr8_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr8_Click_Pedometer3_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,92 :: 		IntToStr(X_hpAxis, demoText);
MOVW	R0, #lo_addr(_X_hpAxis+0)
MOVT	R0, #hi_addr(_X_hpAxis+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Pedometer3_STM.c,93 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,94 :: 		mikrobus_logWrite("    |", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr9_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr9_Click_Pedometer3_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,95 :: 		IntToStr(Y_hpAxis, demoText);
MOVW	R0, #lo_addr(_Y_hpAxis+0)
MOVT	R0, #hi_addr(_Y_hpAxis+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Pedometer3_STM.c,96 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,97 :: 		mikrobus_logWrite("    |", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr10_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr10_Click_Pedometer3_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,98 :: 		IntToStr(Z_hpAxis, demoText);
MOVW	R0, #lo_addr(_Z_hpAxis+0)
MOVT	R0, #hi_addr(_Z_hpAxis+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Pedometer3_STM.c,99 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,100 :: 		mikrobus_logWrite("    |", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr11_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr11_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,101 :: 		mikrobus_logWrite("|___________________________________________|", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr12_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr12_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,102 :: 		mikrobus_logWrite("| Pedometer step counter :", _LOG_TEXT );
MOVW	R0, #lo_addr(?lstr13_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr13_Click_Pedometer3_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,103 :: 		IntToStr(pedStep, demoText);
MOVW	R0, #lo_addr(_pedStep+0)
MOVT	R0, #hi_addr(_pedStep+0)
LDRH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Pedometer3_STM.c,104 :: 		mikrobus_logWrite(demoText, _LOG_TEXT);
MOVS	R1, #1
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,105 :: 		mikrobus_logWrite("            |", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr14_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr14_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,106 :: 		mikrobus_logWrite("|___________________________________________|", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr15_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr15_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,108 :: 		pedometer3_getTiltPosition(&CurrentTiltPosition, &PreviousTiltPosition);
MOVW	R1, #lo_addr(_PreviousTiltPosition+0)
MOVT	R1, #hi_addr(_PreviousTiltPosition+0)
MOVW	R0, #lo_addr(_CurrentTiltPosition+0)
MOVT	R0, #hi_addr(_CurrentTiltPosition+0)
BL	_pedometer3_getTiltPosition+0
;Click_Pedometer3_STM.c,109 :: 		mikrobus_logWrite("| Current Tilt Position  :", _LOG_TEXT );
MOVW	R0, #lo_addr(?lstr16_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr16_Click_Pedometer3_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,110 :: 		switch(CurrentTiltPosition)
IT	AL
BAL	L_applicationTask2
;Click_Pedometer3_STM.c,112 :: 		case 1:
L_applicationTask4:
;Click_Pedometer3_STM.c,114 :: 		mikrobus_logWrite("- LEFT            |", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr17_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr17_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,115 :: 		break;
IT	AL
BAL	L_applicationTask3
;Click_Pedometer3_STM.c,117 :: 		case 2:
L_applicationTask5:
;Click_Pedometer3_STM.c,119 :: 		mikrobus_logWrite("- RIGHT           |", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr18_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr18_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,120 :: 		break;
IT	AL
BAL	L_applicationTask3
;Click_Pedometer3_STM.c,122 :: 		case 3:
L_applicationTask6:
;Click_Pedometer3_STM.c,124 :: 		mikrobus_logWrite("- DOWN            |", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr19_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr19_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,125 :: 		break;
IT	AL
BAL	L_applicationTask3
;Click_Pedometer3_STM.c,127 :: 		case 4:
L_applicationTask7:
;Click_Pedometer3_STM.c,129 :: 		mikrobus_logWrite("- UP              |", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr20_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr20_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,130 :: 		break;
IT	AL
BAL	L_applicationTask3
;Click_Pedometer3_STM.c,132 :: 		case 5:
L_applicationTask8:
;Click_Pedometer3_STM.c,134 :: 		mikrobus_logWrite("- FACE DOWN       |", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr21_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr21_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,135 :: 		break;
IT	AL
BAL	L_applicationTask3
;Click_Pedometer3_STM.c,137 :: 		case 6:
L_applicationTask9:
;Click_Pedometer3_STM.c,139 :: 		mikrobus_logWrite("- FACE UP         |", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr22_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr22_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,140 :: 		break;
IT	AL
BAL	L_applicationTask3
;Click_Pedometer3_STM.c,142 :: 		}
L_applicationTask2:
MOVW	R0, #lo_addr(_CurrentTiltPosition+0)
MOVT	R0, #hi_addr(_CurrentTiltPosition+0)
LDRB	R0, [R0, #0]
CMP	R0, #1
IT	EQ
BEQ	L_applicationTask4
MOVW	R0, #lo_addr(_CurrentTiltPosition+0)
MOVT	R0, #hi_addr(_CurrentTiltPosition+0)
LDRB	R0, [R0, #0]
CMP	R0, #2
IT	EQ
BEQ	L_applicationTask5
MOVW	R0, #lo_addr(_CurrentTiltPosition+0)
MOVT	R0, #hi_addr(_CurrentTiltPosition+0)
LDRB	R0, [R0, #0]
CMP	R0, #3
IT	EQ
BEQ	L_applicationTask6
MOVW	R0, #lo_addr(_CurrentTiltPosition+0)
MOVT	R0, #hi_addr(_CurrentTiltPosition+0)
LDRB	R0, [R0, #0]
CMP	R0, #4
IT	EQ
BEQ	L_applicationTask7
MOVW	R0, #lo_addr(_CurrentTiltPosition+0)
MOVT	R0, #hi_addr(_CurrentTiltPosition+0)
LDRB	R0, [R0, #0]
CMP	R0, #5
IT	EQ
BEQ	L_applicationTask8
MOVW	R0, #lo_addr(_CurrentTiltPosition+0)
MOVT	R0, #hi_addr(_CurrentTiltPosition+0)
LDRB	R0, [R0, #0]
CMP	R0, #6
IT	EQ
BEQ	L_applicationTask9
L_applicationTask3:
;Click_Pedometer3_STM.c,143 :: 		mikrobus_logWrite("|___________________________________________|", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr23_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr23_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,145 :: 		mikrobus_logWrite("  ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr24_Click_Pedometer3_STM+0)
MOVT	R0, #hi_addr(?lstr24_Click_Pedometer3_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Pedometer3_STM.c,146 :: 		Delay_ms( 400 );
MOVW	R7, #15871
MOVT	R7, #73
NOP
NOP
L_applicationTask10:
SUBS	R7, R7, #1
BNE	L_applicationTask10
NOP
NOP
NOP
;Click_Pedometer3_STM.c,147 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_Pedometer3_STM.c,149 :: 		void main()
;Click_Pedometer3_STM.c,151 :: 		systemInit();
BL	_systemInit+0
;Click_Pedometer3_STM.c,152 :: 		applicationInit();
BL	_applicationInit+0
;Click_Pedometer3_STM.c,154 :: 		while (1)
L_main12:
;Click_Pedometer3_STM.c,156 :: 		applicationTask();
BL	_applicationTask+0
;Click_Pedometer3_STM.c,157 :: 		}
IT	AL
BAL	L_main12
;Click_Pedometer3_STM.c,158 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
