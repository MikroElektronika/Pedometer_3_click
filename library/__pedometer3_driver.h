/*
    __pedometer3_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __pedometer3_driver.h
@brief    Pedometer3 Driver
@mainpage Pedometer3 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   PEDOMETER3
@brief      Pedometer3 Click Driver
@{

| Global Library Prefix | **PEDOMETER3** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **sep 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _PEDOMETER3_H_
#define _PEDOMETER3_H_

/** 
 * @macro T_PEDOMETER3_P
 * @brief Driver Abstract type 
 */
#define T_PEDOMETER3_P    const uint8_t*

/** @defgroup PEDOMETER3_COMPILE Compilation Config */              /** @{ */

   #define   __PEDOMETER3_DRV_SPI__                            /**<     @macro __PEDOMETER3_DRV_SPI__  @brief SPI driver selector */
   #define   __PEDOMETER3_DRV_I2C__                            /**<     @macro __PEDOMETER3_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __PEDOMETER3_DRV_UART__                           /**<     @macro __PEDOMETER3_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup PEDOMETER3_VAR Variables */                           /** @{ */

/* Register */
extern const uint8_t _PEDOMETER3_REG_MANUFACTURING_ID      ;
extern const uint8_t _PEDOMETER3_REG_PART_ID               ;
extern const uint8_t _PEDOMETER3_REG_X_AXIS_HIGH_PASS_LOW  ;
extern const uint8_t _PEDOMETER3_REG_X_AXIS_HIGH_PASS_HIGH ;
extern const uint8_t _PEDOMETER3_REG_Y_AXIS_HIGH_PASS_LOW  ;
extern const uint8_t _PEDOMETER3_REG_Y_AXIS_HIGH_PASS_HIGH ;
extern const uint8_t _PEDOMETER3_REG_Z_AXIS_HIGH_PASS_LOW  ;
extern const uint8_t _PEDOMETER3_REG_Z_AXIS_HIGH_PASS_HIGH ;
extern const uint8_t _PEDOMETER3_REG_X_AXIS_OUTPUT_LOW     ;
extern const uint8_t _PEDOMETER3_REG_X_AXIS_OUTPUT_HIGH    ;
extern const uint8_t _PEDOMETER3_REG_Y_AXIS_OUTPUT_LOW     ;
extern const uint8_t _PEDOMETER3_REG_Y_AXIS_OUTPUT_HIGH    ;
extern const uint8_t _PEDOMETER3_REG_Z_AXIS_OUTPUT_LOW     ;
extern const uint8_t _PEDOMETER3_REG_Z_AXIS_OUTPUT_HIGH    ;
extern const uint8_t _PEDOMETER3_REG_PAD_STEP_LOW          ;
extern const uint8_t _PEDOMETER3_REG_PAD_STEP_HIGH         ;
extern const uint8_t _PEDOMETER3_REG_COMMAND_TEST_RESPONSE ;
extern const uint8_t _PEDOMETER3_REG_WHO_AM_I              ;
extern const uint8_t _PEDOMETER3_REG_CURRENT_TILT_POSITION ;
extern const uint8_t _PEDOMETER3_REG_PREVIOUS_TILT_POSITION ;
extern const uint8_t _PEDOMETER3_REG_INS1                  ;
extern const uint8_t _PEDOMETER3_REG_INS2                  ;
extern const uint8_t _PEDOMETER3_REG_INS3                  ;
extern const uint8_t _PEDOMETER3_REG_STATUS                ;
extern const uint8_t _PEDOMETER3_REG_INT_REL               ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_1             ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_2             ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_3             ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_4             ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_5             ;
extern const uint8_t _PEDOMETER3_REG_OUTPUT_DATA_CONTROL   ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_1   ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_2   ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_3   ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_4   ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_5   ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_6   ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_7   ;
extern const uint8_t _PEDOMETER3_REG_TILT_TIMER            ;
extern const uint8_t _PEDOMETER3_REG_TAP_REPORT_CONTROL    ;
extern const uint8_t _PEDOMETER3_REG_DOUBLE_TAP_EVENT      ;
extern const uint8_t _PEDOMETER3_REG_TAP_THRESHOLD_HIGH    ;
extern const uint8_t _PEDOMETER3_REG_TAP_THRESHOLD_LOW     ;
extern const uint8_t _PEDOMETER3_REG_FTD                   ;
extern const uint8_t _PEDOMETER3_REG_STD                   ;
extern const uint8_t _PEDOMETER3_REG_TLT                   ;
extern const uint8_t _PEDOMETER3_REG_TWS                   ;
extern const uint8_t _PEDOMETER3_REG_FREE_FALL_THRESHOLD   ;
extern const uint8_t _PEDOMETER3_REG_FREE_FALL_COUNTER     ;
extern const uint8_t _PEDOMETER3_REG_FREE_FALL_CONTROL     ;
extern const uint8_t _PEDOMETER3_REG_TILT_ANGLE_LL         ;
extern const uint8_t _PEDOMETER3_REG_TILT_ANGLE_HL         ;
extern const uint8_t _PEDOMETER3_REG_HYSTERESIS_SET        ;
extern const uint8_t _PEDOMETER3_REG_LOW_POWER_CONTROL     ;
extern const uint8_t _PEDOMETER3_REG_WUFTH                 ;
extern const uint8_t _PEDOMETER3_REG_BTSWUFTH              ;
extern const uint8_t _PEDOMETER3_REG_BTSTH                 ;
extern const uint8_t _PEDOMETER3_REG_BTS_MOTION_DETECTION  ;
extern const uint8_t _PEDOMETER3_REG_WUF_MOTION_DETECTION  ;
extern const uint8_t _PEDOMETER3_REG_PED_STPWM_LOW         ;
extern const uint8_t _PEDOMETER3_REG_PED_STPWM_HIGH        ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_1   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_2   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_3   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_4   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_5   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_6   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_7   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_8   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_9   ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_10  ;
extern const uint8_t _PEDOMETER3_REG_SELF_TEST             ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_CONTROL_1      ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_CONTROL_2      ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_STATUS_1       ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_STATUS_2       ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_CLEAR          ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_READ           ;


/* Tilt Position Registers (R)*/
extern const uint8_t _PEDOMETER3_POSITON_BIT_LEFT_X_NEGATIVE        ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_RIGHT_X_POSITIVE       ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_DOWN_Y_NEGATIVE        ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_UP_Y_POSITIVE          ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_FACE_DOWN_Y_NEGATIVE   ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_FACE_UP_Y_POSITIVE     ;

/* Interrupt Source Registers (R)*/
/* INS 1 */
extern const uint8_t _PEDOMETER3_INS1_STPOVI  ;
extern const uint8_t _PEDOMETER3_INS1_STPWMI  ;
extern const uint8_t _PEDOMETER3_INS1_TLE     ;
extern const uint8_t _PEDOMETER3_INS1_TRI     ;
extern const uint8_t _PEDOMETER3_INS1_TDO     ;
extern const uint8_t _PEDOMETER3_INS1_TUO     ;
extern const uint8_t _PEDOMETER3_INS1_TFD     ;
extern const uint8_t _PEDOMETER3_INS1_TFU     ;
/* INS 2 */
extern const uint8_t _PEDOMETER3_INS2_FFS             ;
extern const uint8_t _PEDOMETER3_INS2_BFI             ;
extern const uint8_t _PEDOMETER3_INS2_WMI             ;
extern const uint8_t _PEDOMETER3_INS2_DRDY            ;
extern const uint8_t _PEDOMETER3_INS2_TDTS_NO_TAP     ;
extern const uint8_t _PEDOMETER3_INS2_TDTS_SINGLE_TAP ;
extern const uint8_t _PEDOMETER3_INS2_TDTS_DOUBLE_TAP ;
extern const uint8_t _PEDOMETER3_INS2_STPINCI         ;
extern const uint8_t _PEDOMETER3_INS2_TPS             ;
/* INS 3 */
extern const uint8_t _PEDOMETER3_INS3_WUFS ;
extern const uint8_t _PEDOMETER3_INS3_BTS  ;
extern const uint8_t _PEDOMETER3_INS3_XNWU ;
extern const uint8_t _PEDOMETER3_INS3_XPWU ;
extern const uint8_t _PEDOMETER3_INS3_YNWU ;
extern const uint8_t _PEDOMETER3_INS3_YPWU ;
extern const uint8_t _PEDOMETER3_INS3_ZNWU ;
extern const uint8_t _PEDOMETER3_INS3_ZPWU ;

/* Status (STAT) (R)*/
extern const uint8_t _PEDOMETER3_STATUS_NO_INT       ;
extern const uint8_t _PEDOMETER3_STATUS_INT_ACTIVE   ;
extern const uint8_t _PEDOMETER3_STATUS_BACK_TO_SLEEP;
extern const uint8_t _PEDOMETER3_STATUS_WAKE_UP      ;

/* Control register 1 (CNTL1)(RW)*/
extern const uint8_t _PEDOMETER3_CNTL1_MODE_STAND_BY   ;
extern const uint8_t _PEDOMETER3_CNTL1_MODE_LOW_POWER  ;
extern const uint8_t _PEDOMETER3_CNTL1_RES_MODE_HIGHER_NOISE ;
extern const uint8_t _PEDOMETER3_CNTL1_RES_MODE_LOWER_NOISE  ;
extern const uint8_t _PEDOMETER3_CNTL1_DATA_READY_DISABLE    ;
extern const uint8_t _PEDOMETER3_CNTL1_DATA_READY_ENABLE     ;
extern const uint8_t _PEDOMETER3_CNTL1_G_RANGE_2g            ;
extern const uint8_t _PEDOMETER3_CNTL1_G_RANGE_4g            ;
extern const uint8_t _PEDOMETER3_CNTL1_G_RANGE_8g            ;
extern const uint8_t _PEDOMETER3_CNTL1_TAP_DISABLE           ;
extern const uint8_t _PEDOMETER3_CNTL1_TAP_ENABLE            ;
extern const uint8_t _PEDOMETER3_CNTL1_PEDOMETER_DISABLE     ;
extern const uint8_t _PEDOMETER3_CNTL1_PEDOMETER_ENABLE      ;
extern const uint8_t _PEDOMETER3_CNTL1_TILT_DISABLE          ;
extern const uint8_t _PEDOMETER3_CNTL1_TILT_ENABLE           ;

/* Control register 2 */
extern const uint8_t _PEDOMETER3_CNTL2_SOFTWARE_RESET_ACTIVE     ;
extern const uint8_t _PEDOMETER3_CNTL2_SOFTWARE_RESET_NO_ACTIVE  ;
extern const uint8_t _PEDOMETER3_CNTL2_COMMAND_TEST_ACTIVE       ;
extern const uint8_t _PEDOMETER3_CNTL2_COMMAND_TEST_NO_ACTIVE    ;
extern const uint8_t _PEDOMETER3_CNTL2_LEFT_STATE_ENABLE         ;
extern const uint8_t _PEDOMETER3_CNTL2_RIGHT_STATE_ENABLE        ;
extern const uint8_t _PEDOMETER3_CNTL2_DOWN_STATE_ENABLE         ;
extern const uint8_t _PEDOMETER3_CNTL2_UP_STATE_ENABLE           ;
extern const uint8_t _PEDOMETER3_CNTL2_FACE_DOWN_STATE_ENABLE    ;
extern const uint8_t _PEDOMETER3_CNTL2_FACE_UP_STATE_ENABLE      ;

/* Control register 3 */
extern const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_1_563Hz   ;
extern const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_6_25Hz    ;
extern const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_12_5Hz    ;  // Def
extern const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_50Hz      ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_50Hz      ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_100Hz     ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_200Hz     ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_400Hz     ; // Def
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_12_5Hz    ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_25Hz      ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_800Hz     ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_1600Hz    ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_0_781Hz  ; // Def
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_1_563Hz  ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_3_125Hz  ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_6_250Hz  ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_12_5Hz   ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_25Hz     ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_50Hz     ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_100Hz    ;

/* Control register 4 */
extern const uint8_t _PEDOMETER3_CNTL4_COUNTER_CLEAR_MODE             ;
extern const uint8_t _PEDOMETER3_CNTL4_COUNTER_DECREMENT_MODE         ;
extern const uint8_t _PEDOMETER3_CNTL4_THRESHOLD_MODE_ABSOLUTE        ;
extern const uint8_t _PEDOMETER3_CNTL4_THRESHOLD_MODE_RELATIVE        ;
extern const uint8_t _PEDOMETER3_CNTL4_WAKE_UP_DISABLE                ;
extern const uint8_t _PEDOMETER3_CNTL4_WAKE_UP_ENABLE                 ;
extern const uint8_t _PEDOMETER3_CNTL4_BACK_TO_SLEEP_DISABLE          ;
extern const uint8_t _PEDOMETER3_CNTL4_BACK_TO_SLEEP_ENABLE           ;
extern const uint8_t _PEDOMETER3_CNTL4_HIGH_PASS_DISABLE              ;
extern const uint8_t _PEDOMETER3_CNTL4_HIGH_PASS_ENABLE               ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_0_781Hz  ; // Def
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_1_563Hz  ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_3_125Hz  ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_6_250Hz  ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_12_5Hz   ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_25Hz     ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_50Hz     ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_100Hz    ;

/* Control register 5 */
extern const uint8_t _PEDOMETER3_CNTL5_MANUAL_WAKE_UP_0  ;
extern const uint8_t _PEDOMETER3_CNTL5_MANUAL_WAKE_UP_1  ;
extern const uint8_t _PEDOMETER3_CNTL5_MANUAL_SLEEP_UP_0 ;
extern const uint8_t _PEDOMETER3_CNTL5_MANUAL_SLEEP_UP_1 ;

/* Output data control */
extern const uint8_t _PEDOMETER3_ODCNTL_IR_BYPASS_FILTERING_APPLIED  ;
extern const uint8_t _PEDOMETER3_ODCNTL_IR_BYPASS_FILTER_BYPASSED    ;
extern const uint8_t _PEDOMETER3_ODCNTL_LPRO_ODR_9                   ;
extern const uint8_t _PEDOMETER3_ODCNTL_LPRO_ODR_2                   ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_12_5Hz  ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_25Hz    ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_50Hz    ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_100Hz   ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_200Hz   ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_400Hz   ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_800Hz   ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_1600Hz  ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_0_781Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_1_563Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_3_125Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_6_25Hz  ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_3200Hz  ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_6400Hz  ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_12800Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_25600Hz ;

/* Interrupt Control 1 */
extern const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_50uSec      ;
extern const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA_PERIOD  ;
extern const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA2_PERIOD ;
extern const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA4_PERIOD ;
extern const uint8_t _PEDOMETER3_INC1_PHYSICAL_INTERRUPT_DISABLE    ;
extern const uint8_t _PEDOMETER3_INC1_PHYSICAL_INTERRUPT_ENABLE     ;
extern const uint8_t _PEDOMETER3_INC1_INTERRUPT_ACTIVE_LEVEL_LOW    ;
extern const uint8_t _PEDOMETER3_INC1_INTERRUPT_ACTIVE_LEVEL_HIGH   ;
extern const uint8_t _PEDOMETER3_INC1_INTERRUPT_LATCHED             ;
extern const uint8_t _PEDOMETER3_INC1_INTERRUPT_PULSED              ;
extern const uint8_t _PEDOMETER3_INC1_SELF_TEST_POLARITY_NEGATIVE   ;
extern const uint8_t _PEDOMETER3_INC1_SELF_TEST_POLARITY_POSITIVE   ;
extern const uint8_t _PEDOMETER3_INC1_3_WIRE_SPI_INTERFACE_DISABLE  ;
extern const uint8_t _PEDOMETER3_INC1_3_WIRE_SPI_INTERFACE_ENABLED  ;

/* Interrupt Control 2 */
extern const uint8_t _PEDOMETER3_INC2_AOI_ACTIVE_STATE_IN_OR   ;
extern const uint8_t _PEDOMETER3_INC2_AOI_ACTIVE_STATE_IN_AND  ;
extern const uint8_t _PEDOMETER3_INC2_X_NEGATIVE_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC2_X_NEGATIVE_ENABEL        ;
extern const uint8_t _PEDOMETER3_INC2_Y_NEGATIVE_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC2_Y_NEGATIVE_ENABEL        ;
extern const uint8_t _PEDOMETER3_INC2_Z_NEGATIVE_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC2_Z_NEGATIVE_ENABEL        ;
extern const uint8_t _PEDOMETER3_INC2_X_POSITIVE_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC2_X_POSITIVE_ENABEL        ;
extern const uint8_t _PEDOMETER3_INC2_Y_POSITIVE_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC2_Y_POSITIVE_ENABEL        ;
extern const uint8_t _PEDOMETER3_INC2_Z_POSITIVE_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC2_Z_POSITIVE_ENABEL        ;

/* Interrupt Control 3 */
extern const uint8_t _PEDOMETER3_INC3_ALTERNATE_TAP_DISABLE    ;
extern const uint8_t _PEDOMETER3_INC3_ALTERNATE_TAP_ENABLE     ;
extern const uint8_t _PEDOMETER3_INC3_LEFT_STATE_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC3_LEFT_STATE_ENABLE        ;
extern const uint8_t _PEDOMETER3_INC3_RIGHT_STATE_DISABLE      ;
extern const uint8_t _PEDOMETER3_INC3_RIGHT_STATE_ENABLE       ;
extern const uint8_t _PEDOMETER3_INC3_DOWN_STATE_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC3_DOWN_STATE_ENABLE        ;
extern const uint8_t _PEDOMETER3_INC3_UP_STATE_DISABLE         ;
extern const uint8_t _PEDOMETER3_INC3_UP_STATE_ENABLE          ;
extern const uint8_t _PEDOMETER3_INC3_FACE_DOWN_STATE_DISABLE  ;
extern const uint8_t _PEDOMETER3_INC3_FACE_DOWN_STATE_ENABLE   ;
extern const uint8_t _PEDOMETER3_INC3_FACE_UP_STATE_DISABLE    ;
extern const uint8_t _PEDOMETER3_INC3_FACE_UP_STATE_ENABLE     ;

/* Interrupt Control 4 */
extern const uint8_t _PEDOMETER3_INC4_FREE_FALL_INTERRUPT_1_DISABLE     ;
extern const uint8_t _PEDOMETER3_INC4_FREE_FALL_INTERRUPT_1_ENABLE      ;
extern const uint8_t _PEDOMETER3_INC4_BUFFER_FULL_INTERRUPT_1_DISABLE   ;
extern const uint8_t _PEDOMETER3_INC4_BUFFER_FULL_INTERRUPT_1_DISABLE   ;
extern const uint8_t _PEDOMETER3_INC4_WATERMARK_INTERRUPT_1_DISABLE     ;
extern const uint8_t _PEDOMETER3_INC4_WATERMARK_INTERRUPT_1_ENABLE      ;
extern const uint8_t _PEDOMETER3_INC4_DATA_READY_INTERRUPT_1_DISABLE    ;
extern const uint8_t _PEDOMETER3_INC4_DATA_READY_INTERRUPT_1_ENABLE     ;
extern const uint8_t _PEDOMETER3_INC4_BACK_TO_SLEEP_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_BACK_TO_SLEEP_INTERRUPT_1_ENABLE  ;
extern const uint8_t _PEDOMETER3_INC4_TAP_INTERRUPT_1_DISABLE           ;
extern const uint8_t _PEDOMETER3_INC4_TAP_INTERRUPT_1_ENABLE            ;
extern const uint8_t _PEDOMETER3_INC4_WAKE_UP_INTERRUPT_1_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC4_WAKE_UP_INTERRUPT_1_ENABLE        ;
extern const uint8_t _PEDOMETER3_INC4_TILT_POSITION_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_TILT_POSITION_INTERRUPT_1_ENABLE  ;

/* Interrupt Control 5 */
extern const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_50uSec      ;
extern const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA_PERIOD  ;
extern const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA2_PERIOD ;
extern const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA4_PERIOD ;
extern const uint8_t _PEDOMETER3_INC5_PHYSICAL_INTERRUPT_DISABLE    ;
extern const uint8_t _PEDOMETER3_INC5_PHYSICAL_INTERRUPT_ENABLE     ;
extern const uint8_t _PEDOMETER3_INC5_INTERRUPT_ACTIVE_LEVEL_LOW    ;
extern const uint8_t _PEDOMETER3_INC5_INTERRUPT_ACTIVE_LEVEL_HIGH   ;
extern const uint8_t _PEDOMETER3_INC5_INTERRUPT_LATCHED             ;
extern const uint8_t _PEDOMETER3_INC5_INTERRUPT_PULSED              ;
extern const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_2_DISABLE   ;
extern const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_2_ENABLE    ;
extern const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_1_DISABLE   ;
extern const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_1_ENABLE    ;

/* Interrupt Control 6 */
extern const uint8_t _PEDOMETER3_INC6_FREE_FALL_INTERRUPT_2_DISABLE     ;
extern const uint8_t _PEDOMETER3_INC6_FREE_FALL_INTERRUPT_2_ENABLE      ;
extern const uint8_t _PEDOMETER3_INC6_BUFFER_FULL_INTERRUPT_2_DISABLE   ;
extern const uint8_t _PEDOMETER3_INC6_BUFFER_FULL_INTERRUPT_2_DISABLE   ;
extern const uint8_t _PEDOMETER3_INC6_WATERMARK_INTERRUPT_2_DISABLE     ;
extern const uint8_t _PEDOMETER3_INC6_WATERMARK_INTERRUPT_2_ENABLE      ;
extern const uint8_t _PEDOMETER3_INC6_DATA_READY_INTERRUPT_2_DISABLE    ;
extern const uint8_t _PEDOMETER3_INC6_DATA_READY_INTERRUPT_2_ENABLE     ;
extern const uint8_t _PEDOMETER3_INC6_BACK_TO_SLEEP_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_BACK_TO_SLEEP_INTERRUPT_2_ENABLE  ;
extern const uint8_t _PEDOMETER3_INC6_TAP_INTERRUPT_2_DISABLE           ;
extern const uint8_t _PEDOMETER3_INC6_TAP_INTERRUPT_2_ENABLE            ;
extern const uint8_t _PEDOMETER3_INC6_WAKE_UP_INTERRUPT_2_DISABLE       ;
extern const uint8_t _PEDOMETER3_INC6_WAKE_UP_INTERRUPT_2_ENABLE        ;
extern const uint8_t _PEDOMETER3_INC6_TILT_POSITION_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_TILT_POSITION_INTERRUPT_2_ENABLE  ;

/* Interrupt Control 7 */
extern const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_2_DISABLE   ;
extern const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_2_ENABLE    ;
extern const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_2_DISABLE  ;
extern const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_2_ENABLE   ;
extern const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_2_DISABLE  ;
extern const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_2_ENABLE   ;
extern const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_1_DISABLE   ;
extern const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_1_ENABLE    ;
extern const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_1_DISABLE  ;
extern const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_1_ENABLE   ;
extern const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_1_DISABLE  ;
extern const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_1_ENABLE   ;

/* Tap Report Control */
extern const uint8_t _PEDOMETER3_TDTRC_DOUBLE_TAP_INTERRUPT_DISABLE  ;
extern const uint8_t _PEDOMETER3_TDTRC_DOUBLE_TAP_INTERRUPT_ENABLE   ;
extern const uint8_t _PEDOMETER3_TDTRC_SINGLE_TAP_INTERRUPT_DISABLE  ;
extern const uint8_t _PEDOMETER3_TDTRC_SINGLE_TAP_INTERRUPT_ENABLE   ;

/* Free Fall Control */
extern const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_DISABLE                  ;
extern const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_ENABLE                   ;
extern const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_INTERRUPT_LATCH_DISABLE  ;
extern const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_INTERRUPT_UNLATCH_ENABLE ;
extern const uint8_t _PEDOMETER3_FFCNTL_DEBOUNCE_METHODOLOGY_DISABLE       ;
extern const uint8_t _PEDOMETER3_FFCNTL_DEBOUNCE_METHODOLOGY_ENABLE        ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_12_5Hz       ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_25Hz         ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_50Hz         ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_100Hz        ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_200Hz        ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_400Hz        ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_800Hz        ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_1600Hz       ;

/* Low Power Control */
extern const uint8_t _PEDOMETER3_LP_CNTL_NO_AVERAGING        ;
extern const uint8_t _PEDOMETER3_LP_CNTL_2_SAMPLES_AVERAGED  ;
extern const uint8_t _PEDOMETER3_LP_CNTL_4_SAMPLES_AVERAGED  ;
extern const uint8_t _PEDOMETER3_LP_CNTL_8_SAMPLES_AVERAGED  ;
extern const uint8_t _PEDOMETER3_LP_CNTL_16_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_32_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_64_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_128_SAMPLES_AVERAGED;

/* Pedometer Control register 1 */
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_NO_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_2_STEPS  ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_4_STEPS  ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_6_STEPS  ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_8_STEPS  ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_10_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_12_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_14_STEPS ;

/* Pedometer Control register 2 */
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_1   ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_2   ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_4   ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_8   ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_16  ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_32  ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_64  ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_128 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_ODR_SELECT_100Hz     ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_ODR_SELECT_50Hz      ;

/* Device slave address */
extern const uint8_t _PEDOMETER3_SLAVE_ADDRESS_0;
extern const uint8_t _PEDOMETER3_SLAVE_ADDRESS_1;

/* Current Tilt Position *** Previous Tilt Positon */
extern const uint8_t _PEDOMETER_TILT_POSITION_LEFT      ;
extern const uint8_t _PEDOMETER_TILT_POSITION_RIGHT     ;
extern const uint8_t _PEDOMETER_TILT_POSITION_DOWN      ;
extern const uint8_t _PEDOMETER_TILT_POSITION_UP        ;
extern const uint8_t _PEDOMETER_TILT_POSITION_FACE_DOWN ;
extern const uint8_t _PEDOMETER_TILT_POSITION_FACE_UP   ;

/* Tap detection */
extern const uint8_t _PEDOMETER3_TAP_X_NEGATIVE;
extern const uint8_t _PEDOMETER3_TAP_X_POSITIVE;
extern const uint8_t _PEDOMETER3_TAP_Y_NEGATIVE;
extern const uint8_t _PEDOMETER3_TAP_Y_POSITIVE;
extern const uint8_t _PEDOMETER3_TAP_Z_NEGATIVE;
extern const uint8_t _PEDOMETER3_TAP_Z_POSITIVE;

                                                                       /** @} */
/** @defgroup PEDOMETER3_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup PEDOMETER3_INIT Driver Initialization */              /** @{ */

#ifdef   __PEDOMETER3_DRV_SPI__
void pedometer3_spiDriverInit(T_PEDOMETER3_P gpioObj, T_PEDOMETER3_P spiObj);
#endif
#ifdef   __PEDOMETER3_DRV_I2C__
void pedometer3_i2cDriverInit(T_PEDOMETER3_P gpioObj, T_PEDOMETER3_P i2cObj, uint8_t slave);
#endif
#ifdef   __PEDOMETER3_DRV_UART__
void pedometer3_uartDriverInit(T_PEDOMETER3_P gpioObj, T_PEDOMETER3_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void pedometer3_gpioDriverInit(T_PEDOMETER3_P gpioObj);
                                                                       /** @} */
/** @defgroup PEDOMETER3_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for write one byte in register
 *
 * @param[in] reg_addr    Register in which the data will be written
 * @param[in] _data       Data which be written in the register
 */
void pedometer3_writeByte(uint8_t reg_addr, uint8_t _data);

/**
 * @brief Functions for read byte from register
 *
 * @param[in] reg    Register which will be read
 * @retval one byte data which is read from the register
 */
uint8_t pedometer3_readByte(uint8_t reg_addr);

/**
 * @brief Functions for read two bytes from register
 *
 * @param[in] reg    Register which will be read
 * @retval two bytes data which is read from the register
 */
uint16_t pedometer3_readData(uint8_t reg_addr);

/**
 * @brief Functions for read Accel axis data
 *
 * @param[out] x_axis    Accel X axis output data
 * @param[out] y_axis    Accel Y axis output data
 * @param[out] z_axis    Accel Z axis output data
 */
void pedometer3_getAccelAxis(int16_t *x_axis, int16_t *y_axis, int16_t *z_axis);

/**
 * @brief Functions for read High Pass Accel axis data
 *
 * @param[out] x_axis    High pass accel X axis data
 * @param[out] y_axis    High pass accel Y axis data
 * @param[out] z_axis    High pass accel Z axis data
 */
void pedometer3_getHighPassAccelAxis(int16_t *x_axis, int16_t *y_axis, int16_t *z_axis);

/**
 * @brief Functions for start chip configuration
 *
 * @note
 *    Functions and setups that are included in the device's start configuration
 * <pre>
 *  _PEDOMETER3_REG_CONTROL_1 
 * -------------------------------------------
 *   _PEDOMETER3_CNTL1_MODE_STAND_BY
 *   _PEDOMETER3_CNTL1_RES_MODE_HIGHER_NOISE
 *   _PEDOMETER3_CNTL1_DATA_READY_DISABLE
 *   _PEDOMETER3_CNTL1_G_RANGE_8g
 *   _PEDOMETER3_CNTL1_PEDOMETER_DISABLE
 *   _PEDOMETER3_CNTL1_TILT_DISABLE
 *   _PEDOMETER3_CNTL1_TAP_DISABLE
 * </pre>
 *
 * <pre>
 *  _PEDOMETER3_REG_CONTROL_2
 * -------------------------------------------
 *   _PEDOMETER3_CNTL2_SOFTWARE_RESET_NO_ACTIVE
 *   _PEDOMETER3_CNTL2_COMMAND_TEST_NO_ACTIVE
 *   _PEDOMETER3_CNTL2_DOWN_STATE_ENABLE
 *   _PEDOMETER3_CNTL2_FACE_DOWN_STATE_ENABLE
 *   _PEDOMETER3_CNTL2_FACE_UP_STATE_ENABLE
 *   _PEDOMETER3_CNTL2_LEFT_STATE_ENABLE
 *   _PEDOMETER3_CNTL2_RIGHT_STATE_ENABLE
 *   _PEDOMETER3_CNTL2_UP_STATE_ENABLE
 * </pre>
 *
 * <pre>
 *  _PEDOMETER3_REG_CONTROL_3
 * -------------------------------------------
 *   _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_12_5Hz
 *   _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_400Hz
 *   _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_0_781Hz
 * </pre>
 *
 * <pre>
 *  _PEDOMETER3_REG_CONTROL_4
 * -------------------------------------------
 *   _PEDOMETER3_CNTL4_COUNTER_DECREMENT_MODE
 *   _PEDOMETER3_CNTL4_THRESHOLD_MODE_ABSOLUTE
 *   _PEDOMETER3_CNTL4_WAKE_UP_DISABLE
 *   _PEDOMETER3_CNTL4_BACK_TO_SLEEP_DISABLE
 *   _PEDOMETER3_CNTL2_FACE_UP_STATE_ENABLE
 *   _PEDOMETER3_CNTL4_HIGH_PASS_ENABLE
 *   _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_0_781Hz
 * </pre>
 *
 * <pre>
 *  _PEDOMETER3_REG_CONTROL_5
 * -------------------------------------------
 *   _PEDOMETER3_CNTL5_MANUAL_WAKE_UP_0
 *   _PEDOMETER3_CNTL5_MANUAL_SLEEP_UP_0
 * </pre>
 *
 * <pre>
 *  _PEDOMETER3_REG_OUTPUT_DATA_CONTROL
 * -------------------------------------------
 *   _PEDOMETER3_ODCNTL_IR_BYPASS_FILTERING_APPLIED
 *   _PEDOMETER3_ODCNTL_LPRO_ODR_9
 *   _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_50Hz
 *   _PEDOMETER3_CNTL4_BACK_TO_SLEEP_DISABLE
 *   _PEDOMETER3_CNTL2_FACE_UP_STATE_ENABLE
 *   _PEDOMETER3_CNTL4_HIGH_PASS_ENABLE
 *   _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_0_781Hz
 * </pre>
 *
 * Set Pedometer Step Watermark on the 10 000 steps
 *
 * <pre>
 *  _PEDOMETER3_REG_PEDOMETER_CONTROL_2
 * -------------------------------------------
 *   _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_4
 *   _PEDOMETER3_PED_CNTL2_ODR_SELECT_100Hz
 * </pre>
 *
 * <pre>
 *  _PEDOMETER3_REG_INTERRUPT_CONTROL_7
 * -------------------------------------------
 *   _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_2_ENABLE
 *   _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_2_ENABLE
 *   _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_1_ENABLE
 * </pre>
 *
 * <pre>
 *  _PEDOMETER3_REG_INTERRUPT_CONTROL_1
 * -------------------------------------------
 *   _PEDOMETER3_INC1_PHYSICAL_INTERRUPT_ENABLE
 *
 *  _PEDOMETER3_REG_INTERRUPT_CONTROL_5
 * -------------------------------------------
 *   _PEDOMETER3_INC5_PHYSICAL_INTERRUPT_ENABLE
 * </pre>
 * Start pedometer config on the ODR = 100Hz
 */
void pedometer3_startConfiguration();

/**
 * @brief Functions for pedometer configuration
 *
 * @param[in] ODR        ODR frequency ( 100 Hz or 50 Hz)
 *
 * @note
      This function uses default pedometer control of registers for set ODR.
      Settings that are used for Set frequency see datasheet.
 */
void pedometer3_pedometerCongif(uint8_t ODR);

/**
 * @brief Functions for get pedometer step counter
 *
 * @return Number of detected steps in one period
 */
uint16_t pedometer3_getPedometerStepCounter();

/**
 * @brief Functions for get Tilt current and previous position
 *
 * @param[out] current_pos     Tilt current position
 * @param[out] previous_pos    Tilt previous position
 *
 * @note
 * <pre>
 * return value | name position
 * -------------+------------------------------------
 * 1            | _PEDOMETER3_TILT_POSITION_LEFT
 * 2            | _PEDOMETER3_TILT_POSITION_RIGHT
 * 3            | _PEDOMETER3_TILT_POSITION_DOWN
 * 4            | _PEDOMETER3_TILT_POSITION_UP
 * 5            | _PEDOMETER3_TILT_POSITION_FACE_DOWN
 * 6            | _PEDOMETER3_TILT_POSITION_FACE_UP
 * </pre>
 */
void pedometer3_getTiltPosition(uint8_t *current_pos, uint8_t *previous_pos);

/**
 * @brief Functions for get Tap detection
 *
 * @param[out] tap     A tap that's detected
 *
 * @note
 * <pre>
 * return value  | name TAP
 * --------------+---------------------------
 * 10            | _PEDOMETER3_TAP_X_NEGATIVE
 * 11            | _PEDOMETER3_TAP_X_POSITIVE
 * 20            | _PEDOMETER3_TAP_Y_NEGATIVE
 * 21            | _PEDOMETER3_TAP_Y_POSITIVE
 * 30            | _PEDOMETER3_TAP_Z_NEGATIVE
 * 31            | _PEDOMETER3_TAP_Z_POSITIVE
 * </pre>
 */
void pedometer3_getTapDetection(uint8_t *tap);

/**
 * @brief Functions for sets pedometer step counter Watermark
 *
 * @param[in] value
 *
 * @note
      This function is used to set the 16-bit watermark threshold for step counting.
 */
void pedometer3_setPedometerStepWatermark(uint16_t value);

/**
 * @brief Functions for test first comunication width chip
 *
 * @return Did the device have communication with the MCU.
 * @retval 0 - Device error, not read main iD
 * @retval 1 - Successfully read the main ID and the device is ready to work
 */
uint8_t pedometer3_testCommunication();

/**
 * @brief Functions for read INT pin state
 *
 * @retval Interrupt 1 state
 */
uint8_t pedometer3_getInterrupt1();

/**
 * @brief Functions for read RST pin state
 *
 * @retval Interrupt 2 state
 */
uint8_t pedometer3_getInterrupt2();

/**
 * @brief Functions for read AN pin state
 *
 * @retval Trigger interrupt state
 */
uint8_t pedometer3_getTriggerInterrupt();


                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Pedometer3_STM.c
    @example Click_Pedometer3_TIVA.c
    @example Click_Pedometer3_CEC.c
    @example Click_Pedometer3_KINETIS.c
    @example Click_Pedometer3_MSP.c
    @example Click_Pedometer3_PIC.c
    @example Click_Pedometer3_PIC32.c
    @example Click_Pedometer3_DSPIC.c
    @example Click_Pedometer3_AVR.c
    @example Click_Pedometer3_FT90x.c
    @example Click_Pedometer3_STM.mbas
    @example Click_Pedometer3_TIVA.mbas
    @example Click_Pedometer3_CEC.mbas
    @example Click_Pedometer3_KINETIS.mbas
    @example Click_Pedometer3_MSP.mbas
    @example Click_Pedometer3_PIC.mbas
    @example Click_Pedometer3_PIC32.mbas
    @example Click_Pedometer3_DSPIC.mbas
    @example Click_Pedometer3_AVR.mbas
    @example Click_Pedometer3_FT90x.mbas
    @example Click_Pedometer3_STM.mpas
    @example Click_Pedometer3_TIVA.mpas
    @example Click_Pedometer3_CEC.mpas
    @example Click_Pedometer3_KINETIS.mpas
    @example Click_Pedometer3_MSP.mpas
    @example Click_Pedometer3_PIC.mpas
    @example Click_Pedometer3_PIC32.mpas
    @example Click_Pedometer3_DSPIC.mpas
    @example Click_Pedometer3_AVR.mpas
    @example Click_Pedometer3_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __pedometer3_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */