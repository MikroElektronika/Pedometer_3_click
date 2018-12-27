/*
    __pedometer3_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__pedometer3_driver.h"
#include "__pedometer3_hal.c"

/* ------------------------------------------------------------------- MACROS */

/* Register */
const uint8_t _PEDOMETER3_REG_MANUFACTURING_ID      = 0x00;
const uint8_t _PEDOMETER3_REG_PART_ID               = 0x01;
const uint8_t _PEDOMETER3_REG_X_AXIS_HIGH_PASS_LOW  = 0x02;
const uint8_t _PEDOMETER3_REG_X_AXIS_HIGH_PASS_HIGH = 0x03;
const uint8_t _PEDOMETER3_REG_Y_AXIS_HIGH_PASS_LOW  = 0x04;
const uint8_t _PEDOMETER3_REG_Y_AXIS_HIGH_PASS_HIGH = 0x05;
const uint8_t _PEDOMETER3_REG_Z_AXIS_HIGH_PASS_LOW  = 0x06;
const uint8_t _PEDOMETER3_REG_Z_AXIS_HIGH_PASS_HIGH = 0x07;
const uint8_t _PEDOMETER3_REG_X_AXIS_OUTPUT_LOW     = 0x08;
const uint8_t _PEDOMETER3_REG_X_AXIS_OUTPUT_HIGH    = 0x09;
const uint8_t _PEDOMETER3_REG_Y_AXIS_OUTPUT_LOW     = 0x0A;
const uint8_t _PEDOMETER3_REG_Y_AXIS_OUTPUT_HIGH    = 0x0B;
const uint8_t _PEDOMETER3_REG_Z_AXIS_OUTPUT_LOW     = 0x0C;
const uint8_t _PEDOMETER3_REG_Z_AXIS_OUTPUT_HIGH    = 0x0D;
const uint8_t _PEDOMETER3_REG_PAD_STEP_LOW          = 0x0E;
const uint8_t _PEDOMETER3_REG_PAD_STEP_HIGH         = 0x0F;
const uint8_t _PEDOMETER3_REG_COMMAND_TEST_RESPONSE = 0x10;
const uint8_t _PEDOMETER3_REG_WHO_AM_I              = 0x11;
const uint8_t _PEDOMETER3_REG_CURRENT_TILT_POSITION = 0x12;
const uint8_t _PEDOMETER3_REG_PREVIOUS_TILT_POSITION = 0x13;
const uint8_t _PEDOMETER3_REG_INS1                  = 0x14;
const uint8_t _PEDOMETER3_REG_INS2                  = 0x15;
const uint8_t _PEDOMETER3_REG_INS3                  = 0x16;
const uint8_t _PEDOMETER3_REG_STATUS                = 0x17;
const uint8_t _PEDOMETER3_REG_INT_REL               = 0x19;
const uint8_t _PEDOMETER3_REG_CONTROL_1             = 0x1A;
const uint8_t _PEDOMETER3_REG_CONTROL_2             = 0x1B;
const uint8_t _PEDOMETER3_REG_CONTROL_3             = 0x1C;
const uint8_t _PEDOMETER3_REG_CONTROL_4             = 0x1D;
const uint8_t _PEDOMETER3_REG_CONTROL_5             = 0x1E;
const uint8_t _PEDOMETER3_REG_OUTPUT_DATA_CONTROL   = 0x1F;
const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_1   = 0x20;
const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_2   = 0x21;
const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_3   = 0x22;
const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_4   = 0x23;
const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_5   = 0x24;
const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_6   = 0x25;
const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_7   = 0x26;
const uint8_t _PEDOMETER3_REG_TILT_TIMER            = 0x27;
const uint8_t _PEDOMETER3_REG_TAP_REPORT_CONTROL    = 0x28;
const uint8_t _PEDOMETER3_REG_DOUBLE_TAP_EVENT      = 0x29;
const uint8_t _PEDOMETER3_REG_TAP_THRESHOLD_HIGH    = 0x2A;
const uint8_t _PEDOMETER3_REG_TAP_THRESHOLD_LOW     = 0x2B;
const uint8_t _PEDOMETER3_REG_FTD                   = 0x2C;
const uint8_t _PEDOMETER3_REG_STD                   = 0x2D;
const uint8_t _PEDOMETER3_REG_TLT                   = 0x2E;
const uint8_t _PEDOMETER3_REG_TWS                   = 0x2F;
const uint8_t _PEDOMETER3_REG_FREE_FALL_THRESHOLD   = 0x30;
const uint8_t _PEDOMETER3_REG_FREE_FALL_COUNTER     = 0x31;
const uint8_t _PEDOMETER3_REG_FREE_FALL_CONTROL     = 0x32;
const uint8_t _PEDOMETER3_REG_TILT_ANGLE_LL         = 0x34;
const uint8_t _PEDOMETER3_REG_TILT_ANGLE_HL         = 0x35;
const uint8_t _PEDOMETER3_REG_HYSTERESIS_SET        = 0x36;
const uint8_t _PEDOMETER3_REG_LOW_POWER_CONTROL     = 0x37;
const uint8_t _PEDOMETER3_REG_WUFTH                 = 0x3C;
const uint8_t _PEDOMETER3_REG_BTSWUFTH              = 0x3D;
const uint8_t _PEDOMETER3_REG_BTSTH                 = 0x3E;
const uint8_t _PEDOMETER3_REG_BTS_MOTION_DETECTION  = 0x3F;
const uint8_t _PEDOMETER3_REG_WUF_MOTION_DETECTION  = 0x40;
const uint8_t _PEDOMETER3_REG_PED_STPWM_LOW         = 0x41;
const uint8_t _PEDOMETER3_REG_PED_STPWM_HIGH        = 0x42;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_1   = 0x43;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_2   = 0x44;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_3   = 0x45;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_4   = 0x46;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_5   = 0x47;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_6   = 0x48;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_7   = 0x49;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_8   = 0x4A;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_9   = 0x4B;
const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_10  = 0x4C;
const uint8_t _PEDOMETER3_REG_SELF_TEST             = 0x4D;
const uint8_t _PEDOMETER3_REG_BUFFER_CONTROL_1      = 0x5A;
const uint8_t _PEDOMETER3_REG_BUFFER_CONTROL_2      = 0x5B;
const uint8_t _PEDOMETER3_REG_BUFFER_STATUS_1       = 0x5C;
const uint8_t _PEDOMETER3_REG_BUFFER_STATUS_2       = 0x5D;
const uint8_t _PEDOMETER3_REG_BUFFER_CLEAR          = 0x5E;
const uint8_t _PEDOMETER3_REG_BUFFER_READ           = 0x5F;


/* Tilt Position Registers (R)*/
const uint8_t _PEDOMETER3_POSITON_BIT_LEFT_X_NEGATIVE        = 0x20;
const uint8_t _PEDOMETER3_POSITON_BIT_RIGHT_X_POSITIVE       = 0x10;
const uint8_t _PEDOMETER3_POSITON_BIT_DOWN_Y_NEGATIVE        = 0x08;
const uint8_t _PEDOMETER3_POSITON_BIT_UP_Y_POSITIVE          = 0x04;
const uint8_t _PEDOMETER3_POSITON_BIT_FACE_DOWN_Y_NEGATIVE   = 0x02;
const uint8_t _PEDOMETER3_POSITON_BIT_FACE_UP_Y_POSITIVE     = 0x01;

/* Interrupt Source Registers (R)*/
/* INS 1 */
const uint8_t _PEDOMETER3_INS1_STPOVI  = 0x80;
const uint8_t _PEDOMETER3_INS1_STPWMI  = 0x40;
const uint8_t _PEDOMETER3_INS1_TLE     = 0x20;
const uint8_t _PEDOMETER3_INS1_TRI     = 0x10;
const uint8_t _PEDOMETER3_INS1_TDO     = 0x08;
const uint8_t _PEDOMETER3_INS1_TUO     = 0x04;
const uint8_t _PEDOMETER3_INS1_TFD     = 0x02;
const uint8_t _PEDOMETER3_INS1_TFU     = 0x01;
/* INS 2 */
const uint8_t _PEDOMETER3_INS2_FFS                = 0x80;
const uint8_t _PEDOMETER3_INS2_BFI                = 0x40;
const uint8_t _PEDOMETER3_INS2_WMI                = 0x20;
const uint8_t _PEDOMETER3_INS2_DRDY               = 0x10;
const uint8_t _PEDOMETER3_INS2_TDTS_NO_TAP        = 0x00;
const uint8_t _PEDOMETER3_INS2_TDTS_SINGLE_TAP    = 0x04;
const uint8_t _PEDOMETER3_INS2_TDTS_DOUBLE_TAP    = 0x08;
const uint8_t _PEDOMETER3_INS2_STPINCI            = 0x02;
const uint8_t _PEDOMETER3_INS2_TPS                = 0x01;
/* INS 3 */
const uint8_t _PEDOMETER3_INS3_WUFS    = 0x80;
const uint8_t _PEDOMETER3_INS3_BTS     = 0x40;
const uint8_t _PEDOMETER3_INS3_XNWU    = 0x20;
const uint8_t _PEDOMETER3_INS3_XPWU    = 0x10;
const uint8_t _PEDOMETER3_INS3_YNWU    = 0x08;
const uint8_t _PEDOMETER3_INS3_YPWU    = 0x04;
const uint8_t _PEDOMETER3_INS3_ZNWU    = 0x02;
const uint8_t _PEDOMETER3_INS3_ZPWU    = 0x01;

/* Status (STAT) (R)*/
const uint8_t _PEDOMETER3_STATUS_NO_INT         = 0x00;
const uint8_t _PEDOMETER3_STATUS_INT_ACTIVE     = 0x10;
const uint8_t _PEDOMETER3_STATUS_BACK_TO_SLEEP  = 0x00;
const uint8_t _PEDOMETER3_STATUS_WAKE_UP        = 0x01;

/* Control register 1 (CNTL1)(RW)*/
const uint8_t _PEDOMETER3_CNTL1_MODE_STAND_BY   = 0x00;
const uint8_t _PEDOMETER3_CNTL1_MODE_LOW_POWER  = 0x80;
const uint8_t _PEDOMETER3_CNTL1_RES_MODE_HIGHER_NOISE   = 0x00;
const uint8_t _PEDOMETER3_CNTL1_RES_MODE_LOWER_NOISE    = 0x40;
const uint8_t _PEDOMETER3_CNTL1_DATA_READY_DISABLE      = 0x00;
const uint8_t _PEDOMETER3_CNTL1_DATA_READY_ENABLE       = 0x20;
const uint8_t _PEDOMETER3_CNTL1_G_RANGE_2g              = 0x00;
const uint8_t _PEDOMETER3_CNTL1_G_RANGE_4g              = 0x08;
const uint8_t _PEDOMETER3_CNTL1_G_RANGE_8g              = 0x10;
const uint8_t _PEDOMETER3_CNTL1_TAP_DISABLE             = 0x00;
const uint8_t _PEDOMETER3_CNTL1_TAP_ENABLE              = 0x04;
const uint8_t _PEDOMETER3_CNTL1_PEDOMETER_DISABLE       = 0x00;
const uint8_t _PEDOMETER3_CNTL1_PEDOMETER_ENABLE        = 0x02;
const uint8_t _PEDOMETER3_CNTL1_TILT_DISABLE            = 0x00;
const uint8_t _PEDOMETER3_CNTL1_TILT_ENABLE             = 0x01;

/* Control register 2 */
const uint8_t _PEDOMETER3_CNTL2_SOFTWARE_RESET_ACTIVE      = 0x80;
const uint8_t _PEDOMETER3_CNTL2_SOFTWARE_RESET_NO_ACTIVE   = 0x00;
const uint8_t _PEDOMETER3_CNTL2_COMMAND_TEST_ACTIVE        = 0x40;
const uint8_t _PEDOMETER3_CNTL2_COMMAND_TEST_NO_ACTIVE     = 0x00;
const uint8_t _PEDOMETER3_CNTL2_LEFT_STATE_ENABLE          = 0x20;
const uint8_t _PEDOMETER3_CNTL2_RIGHT_STATE_ENABLE         = 0x10;
const uint8_t _PEDOMETER3_CNTL2_DOWN_STATE_ENABLE          = 0x08;
const uint8_t _PEDOMETER3_CNTL2_UP_STATE_ENABLE            = 0x04;
const uint8_t _PEDOMETER3_CNTL2_FACE_DOWN_STATE_ENABLE     = 0x02;
const uint8_t _PEDOMETER3_CNTL2_FACE_UP_STATE_ENABLE       = 0x01;

/* Control register 3 */
const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_1_563Hz   = 0x00;
const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_6_25Hz    = 0x40;
const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_12_5Hz    = 0x80;  // Def
const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_50Hz      = 0xC0;
const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_50Hz      = 0x00;
const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_100Hz     = 0x08;
const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_200Hz     = 0x10;
const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_400Hz     = 0x18; // Def
const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_12_5Hz    = 0x20;
const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_25Hz      = 0x28;
const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_800Hz     = 0x30;
const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_1600Hz    = 0x38;
const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_0_781Hz  = 0x00; // Def
const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_1_563Hz  = 0x01;
const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_3_125Hz  = 0x02;
const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_6_250Hz  = 0x03;
const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_12_5Hz   = 0x04;
const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_25Hz     = 0x05;
const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_50Hz     = 0x06;
const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_100Hz    = 0x07;

/* Control register 4 */
const uint8_t _PEDOMETER3_CNTL4_COUNTER_CLEAR_MODE              = 0x00;
const uint8_t _PEDOMETER3_CNTL4_COUNTER_DECREMENT_MODE          = 0x80;
const uint8_t _PEDOMETER3_CNTL4_THRESHOLD_MODE_ABSOLUTE         = 0x00;
const uint8_t _PEDOMETER3_CNTL4_THRESHOLD_MODE_RELATIVE         = 0x40;
const uint8_t _PEDOMETER3_CNTL4_WAKE_UP_DISABLE                 = 0x00;
const uint8_t _PEDOMETER3_CNTL4_WAKE_UP_ENABLE                  = 0x20;
const uint8_t _PEDOMETER3_CNTL4_BACK_TO_SLEEP_DISABLE           = 0x00;
const uint8_t _PEDOMETER3_CNTL4_BACK_TO_SLEEP_ENABLE            = 0x10;
const uint8_t _PEDOMETER3_CNTL4_HIGH_PASS_DISABLE               = 0x00;
const uint8_t _PEDOMETER3_CNTL4_HIGH_PASS_ENABLE                = 0x08;
const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_0_781Hz   = 0x00; // Def
const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_1_563Hz   = 0x01;
const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_3_125Hz   = 0x02;
const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_6_250Hz   = 0x03;
const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_12_5Hz    = 0x04;
const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_25Hz      = 0x05;
const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_50Hz      = 0x06;
const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_100Hz     = 0x07;

/* Control register 5 */
const uint8_t _PEDOMETER3_CNTL5_MANUAL_WAKE_UP_0   = 0x00;
const uint8_t _PEDOMETER3_CNTL5_MANUAL_WAKE_UP_1   = 0x02;
const uint8_t _PEDOMETER3_CNTL5_MANUAL_SLEEP_UP_0  = 0x00;
const uint8_t _PEDOMETER3_CNTL5_MANUAL_SLEEP_UP_1  = 0x01;

/* Output data control */
const uint8_t _PEDOMETER3_ODCNTL_IR_BYPASS_FILTERING_APPLIED  = 0x00;
const uint8_t _PEDOMETER3_ODCNTL_IR_BYPASS_FILTER_BYPASSED    = 0x80;
const uint8_t _PEDOMETER3_ODCNTL_LPRO_ODR_9                   = 0x00;
const uint8_t _PEDOMETER3_ODCNTL_LPRO_ODR_2                   = 0x40;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_12_5Hz  = 0x00;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_25Hz    = 0x01;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_50Hz    = 0x02;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_100Hz   = 0x03;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_200Hz   = 0x04;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_400Hz   = 0x05;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_800Hz   = 0x06;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_1600Hz  = 0x07;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_0_781Hz = 0x08;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_1_563Hz = 0x09;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_3_125Hz = 0x0A;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_6_25Hz  = 0x0B;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_3200Hz  = 0x0C;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_6400Hz  = 0x0D;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_12800Hz = 0x0E;
const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_25600Hz = 0x0F;

/* Interrupt Control 1 */
const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_50uSec      = 0x00;
const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA_PERIOD  = 0x40;
const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA2_PERIOD = 0x80;
const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA4_PERIOD = 0xC0;
const uint8_t _PEDOMETER3_INC1_PHYSICAL_INTERRUPT_DISABLE    = 0x00;
const uint8_t _PEDOMETER3_INC1_PHYSICAL_INTERRUPT_ENABLE     = 0x20;
const uint8_t _PEDOMETER3_INC1_INTERRUPT_ACTIVE_LEVEL_LOW    = 0x00;
const uint8_t _PEDOMETER3_INC1_INTERRUPT_ACTIVE_LEVEL_HIGH   = 0x10;
const uint8_t _PEDOMETER3_INC1_INTERRUPT_LATCHED             = 0x00;
const uint8_t _PEDOMETER3_INC1_INTERRUPT_PULSED              = 0x08;
const uint8_t _PEDOMETER3_INC1_SELF_TEST_POLARITY_NEGATIVE   = 0x00;
const uint8_t _PEDOMETER3_INC1_SELF_TEST_POLARITY_POSITIVE   = 0x02;
const uint8_t _PEDOMETER3_INC1_3_WIRE_SPI_INTERFACE_DISABLE  = 0x00;
const uint8_t _PEDOMETER3_INC1_3_WIRE_SPI_INTERFACE_ENABLED  = 0x01;

/* Interrupt Control 2 */
const uint8_t _PEDOMETER3_INC2_AOI_ACTIVE_STATE_IN_OR    = 0x00;
const uint8_t _PEDOMETER3_INC2_AOI_ACTIVE_STATE_IN_AND   = 0x40;
const uint8_t _PEDOMETER3_INC2_X_NEGATIVE_DISABLE        = 0x00;
const uint8_t _PEDOMETER3_INC2_X_NEGATIVE_ENABEL         = 0x20;
const uint8_t _PEDOMETER3_INC2_Y_NEGATIVE_DISABLE        = 0x00;
const uint8_t _PEDOMETER3_INC2_Y_NEGATIVE_ENABEL         = 0x08;
const uint8_t _PEDOMETER3_INC2_Z_NEGATIVE_DISABLE        = 0x00;
const uint8_t _PEDOMETER3_INC2_Z_NEGATIVE_ENABEL         = 0x02;
const uint8_t _PEDOMETER3_INC2_X_POSITIVE_DISABLE        = 0x00;
const uint8_t _PEDOMETER3_INC2_X_POSITIVE_ENABEL         = 0x10;
const uint8_t _PEDOMETER3_INC2_Y_POSITIVE_DISABLE        = 0x00;
const uint8_t _PEDOMETER3_INC2_Y_POSITIVE_ENABEL         = 0x04;
const uint8_t _PEDOMETER3_INC2_Z_POSITIVE_DISABLE        = 0x00;
const uint8_t _PEDOMETER3_INC2_Z_POSITIVE_ENABEL         = 0x01;

/* Interrupt Control 3 */
const uint8_t _PEDOMETER3_INC3_ALTERNATE_TAP_DISABLE     = 0x00;
const uint8_t _PEDOMETER3_INC3_ALTERNATE_TAP_ENABLE      = 0x40;
const uint8_t _PEDOMETER3_INC3_LEFT_STATE_DISABLE        = 0x00;
const uint8_t _PEDOMETER3_INC3_LEFT_STATE_ENABLE         = 0x20;
const uint8_t _PEDOMETER3_INC3_RIGHT_STATE_DISABLE       = 0x00;
const uint8_t _PEDOMETER3_INC3_RIGHT_STATE_ENABLE        = 0x10;
const uint8_t _PEDOMETER3_INC3_DOWN_STATE_DISABLE        = 0x00;
const uint8_t _PEDOMETER3_INC3_DOWN_STATE_ENABLE         = 0x08;
const uint8_t _PEDOMETER3_INC3_UP_STATE_DISABLE          = 0x00;
const uint8_t _PEDOMETER3_INC3_UP_STATE_ENABLE           = 0x04;
const uint8_t _PEDOMETER3_INC3_FACE_DOWN_STATE_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_INC3_FACE_DOWN_STATE_ENABLE    = 0x02;
const uint8_t _PEDOMETER3_INC3_FACE_UP_STATE_DISABLE     = 0x00;
const uint8_t _PEDOMETER3_INC3_FACE_UP_STATE_ENABLE      = 0x01;

/* Interrupt Control 4 */
const uint8_t _PEDOMETER3_INC4_FREE_FALL_INTERRUPT_1_DISABLE     = 0x00;
const uint8_t _PEDOMETER3_INC4_FREE_FALL_INTERRUPT_1_ENABLE      = 0x80;
const uint8_t _PEDOMETER3_INC4_BUFFER_FULL_INTERRUPT_1_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_INC4_BUFFER_FULL_INTERRUPT_1_ENABLE    = 0x40;
const uint8_t _PEDOMETER3_INC4_WATERMARK_INTERRUPT_1_DISABLE     = 0x00;
const uint8_t _PEDOMETER3_INC4_WATERMARK_INTERRUPT_1_ENABLE      = 0x20;
const uint8_t _PEDOMETER3_INC4_DATA_READY_INTERRUPT_1_DISABLE    = 0x00;
const uint8_t _PEDOMETER3_INC4_DATA_READY_INTERRUPT_1_ENABLE     = 0x10;
const uint8_t _PEDOMETER3_INC4_BACK_TO_SLEEP_INTERRUPT_1_DISABLE = 0x00;
const uint8_t _PEDOMETER3_INC4_BACK_TO_SLEEP_INTERRUPT_1_ENABLE  = 0x08;
const uint8_t _PEDOMETER3_INC4_TAP_INTERRUPT_1_DISABLE           = 0x00;
const uint8_t _PEDOMETER3_INC4_TAP_INTERRUPT_1_ENABLE            = 0x04;
const uint8_t _PEDOMETER3_INC4_WAKE_UP_INTERRUPT_1_DISABLE       = 0x00;
const uint8_t _PEDOMETER3_INC4_WAKE_UP_INTERRUPT_1_ENABLE        = 0x02;
const uint8_t _PEDOMETER3_INC4_TILT_POSITION_INTERRUPT_1_DISABLE = 0x00;
const uint8_t _PEDOMETER3_INC4_TILT_POSITION_INTERRUPT_1_ENABLE  = 0x01;

/* Interrupt Control 5 */
const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_50uSec      = 0x00;
const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA_PERIOD  = 0x40;
const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA2_PERIOD = 0x80;
const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA4_PERIOD = 0xC0;
const uint8_t _PEDOMETER3_INC5_PHYSICAL_INTERRUPT_DISABLE    = 0x00;
const uint8_t _PEDOMETER3_INC5_PHYSICAL_INTERRUPT_ENABLE     = 0x20;
const uint8_t _PEDOMETER3_INC5_INTERRUPT_ACTIVE_LEVEL_LOW    = 0x00;
const uint8_t _PEDOMETER3_INC5_INTERRUPT_ACTIVE_LEVEL_HIGH   = 0x10;
const uint8_t _PEDOMETER3_INC5_INTERRUPT_LATCHED             = 0x00;
const uint8_t _PEDOMETER3_INC5_INTERRUPT_PULSED              = 0x08;
const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_2_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_2_ENABLE    = 0x02;
const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_1_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_1_ENABLE    = 0x01;

/* Interrupt Control 6 */
const uint8_t _PEDOMETER3_INC6_FREE_FALL_INTERRUPT_2_DISABLE     = 0x00;
const uint8_t _PEDOMETER3_INC6_FREE_FALL_INTERRUPT_2_ENABLE      = 0x80;
const uint8_t _PEDOMETER3_INC6_BUFFER_FULL_INTERRUPT_2_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_INC6_BUFFER_FULL_INTERRUPT_2_ENABLE    = 0x40;
const uint8_t _PEDOMETER3_INC6_WATERMARK_INTERRUPT_2_DISABLE     = 0x00;
const uint8_t _PEDOMETER3_INC6_WATERMARK_INTERRUPT_2_ENABLE      = 0x20;
const uint8_t _PEDOMETER3_INC6_DATA_READY_INTERRUPT_2_DISABLE    = 0x00;
const uint8_t _PEDOMETER3_INC6_DATA_READY_INTERRUPT_2_ENABLE     = 0x10;
const uint8_t _PEDOMETER3_INC6_BACK_TO_SLEEP_INTERRUPT_2_DISABLE = 0x00;
const uint8_t _PEDOMETER3_INC6_BACK_TO_SLEEP_INTERRUPT_2_ENABLE  = 0x08;
const uint8_t _PEDOMETER3_INC6_TAP_INTERRUPT_2_DISABLE           = 0x00;
const uint8_t _PEDOMETER3_INC6_TAP_INTERRUPT_2_ENABLE            = 0x04;
const uint8_t _PEDOMETER3_INC6_WAKE_UP_INTERRUPT_2_DISABLE       = 0x00;
const uint8_t _PEDOMETER3_INC6_WAKE_UP_INTERRUPT_2_ENABLE        = 0x02;
const uint8_t _PEDOMETER3_INC6_TILT_POSITION_INTERRUPT_2_DISABLE = 0x00;
const uint8_t _PEDOMETER3_INC6_TILT_POSITION_INTERRUPT_2_ENABLE  = 0x01;

/* Interrupt Control 7 */
const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_2_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_2_ENABLE    = 0x40;
const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_2_DISABLE  = 0x00;
const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_2_ENABLE   = 0x20;
const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_2_DISABLE  = 0x00;
const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_2_ENABLE   = 0x10;
const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_1_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_1_ENABLE    = 0x04;
const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_1_DISABLE  = 0x00;
const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_1_ENABLE   = 0x02;
const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_1_DISABLE  = 0x00;
const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_1_ENABLE   = 0x01;

/* Tap Report Control */
const uint8_t _PEDOMETER3_TDTRC_DOUBLE_TAP_INTERRUPT_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_TDTRC_DOUBLE_TAP_INTERRUPT_ENABLE    = 0x02;
const uint8_t _PEDOMETER3_TDTRC_SINGLE_TAP_INTERRUPT_DISABLE   = 0x00;
const uint8_t _PEDOMETER3_TDTRC_SINGLE_TAP_INTERRUPT_ENABLE    = 0x01;

/* Free Fall Control */
const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_DISABLE                  = 0x00;
const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_ENABLE                   = 0x80;
const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_INTERRUPT_LATCH_DISABLE  = 0x00;
const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_INTERRUPT_UNLATCH_ENABLE = 0x40;
const uint8_t _PEDOMETER3_FFCNTL_DEBOUNCE_METHODOLOGY_DISABLE       = 0x00;
const uint8_t _PEDOMETER3_FFCNTL_DEBOUNCE_METHODOLOGY_ENABLE        = 0x08;
const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_12_5Hz       = 0x00;
const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_25Hz         = 0x01;
const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_50Hz         = 0x02;
const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_100Hz        = 0x03;
const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_200Hz        = 0x04;
const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_400Hz        = 0x05;
const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_800Hz        = 0x06;
const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_1600Hz       = 0x07;

/* Low Power Control */
const uint8_t _PEDOMETER3_LP_CNTL_NO_AVERAGING         = 0x00;
const uint8_t _PEDOMETER3_LP_CNTL_2_SAMPLES_AVERAGED   = 0x10;
const uint8_t _PEDOMETER3_LP_CNTL_4_SAMPLES_AVERAGED   = 0x20;
const uint8_t _PEDOMETER3_LP_CNTL_8_SAMPLES_AVERAGED   = 0x30;
const uint8_t _PEDOMETER3_LP_CNTL_16_SAMPLES_AVERAGED  = 0x40;
const uint8_t _PEDOMETER3_LP_CNTL_32_SAMPLES_AVERAGED  = 0x50;
const uint8_t _PEDOMETER3_LP_CNTL_64_SAMPLES_AVERAGED  = 0x60;
const uint8_t _PEDOMETER3_LP_CNTL_128_SAMPLES_AVERAGED = 0x70;

/* Pedometer Control register 1 */
const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_NO_STEPS   = 0x00;
const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_2_STEPS    = 0x01;
const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_4_STEPS    = 0x02;
const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_6_STEPS    = 0x03;
const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_8_STEPS    = 0x04;
const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_10_STEPS   = 0x05;
const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_12_STEPS   = 0x06;
const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_14_STEPS   = 0x07;

/* Pedometer Control register 2 */
const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_1   = 0x00;
const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_2   = 0x10;
const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_4   = 0x20;
const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_8   = 0x30;
const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_16  = 0x40;
const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_32  = 0x50;
const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_64  = 0x60;
const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_128 = 0x70;
const uint8_t _PEDOMETER3_PED_CNTL2_ODR_SELECT_100Hz     = 0x0C;
const uint8_t _PEDOMETER3_PED_CNTL2_ODR_SELECT_50Hz      = 0x06;

/* Device slave address */
const uint8_t _PEDOMETER3_SLAVE_ADDRESS_0  = 0x1E;
const uint8_t _PEDOMETER3_SLAVE_ADDRESS_1  = 0x1F;

/* Current Tilt Position *** Previous Tilt Positon */
const uint8_t _PEDOMETER3_TILT_POSITION_LEFT      = 1;
const uint8_t _PEDOMETER3_TILT_POSITION_RIGHT     = 2;
const uint8_t _PEDOMETER3_TILT_POSITION_DOWN      = 3;
const uint8_t _PEDOMETER3_TILT_POSITION_UP        = 4;
const uint8_t _PEDOMETER3_TILT_POSITION_FACE_DOWN = 5;
const uint8_t _PEDOMETER3_TILT_POSITION_FACE_UP   = 6;

/* Tap detection */
const uint8_t _PEDOMETER3_TAP_X_NEGATIVE   = 0x10;
const uint8_t _PEDOMETER3_TAP_X_POSITIVE   = 0x11;
const uint8_t _PEDOMETER3_TAP_Y_NEGATIVE   = 0x20;
const uint8_t _PEDOMETER3_TAP_Y_POSITIVE   = 0x21;
const uint8_t _PEDOMETER3_TAP_Z_NEGATIVE   = 0x30;
const uint8_t _PEDOMETER3_TAP_Z_POSITIVE   = 0x31;


/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __PEDOMETER3_DRV_I2C__
static uint8_t _slaveAddress;
#endif

static uint8_t _communication;

/* Device Flag */
static const uint8_t _DEVICE_OK               = 0x00;
static const uint8_t _DEVICE_ERROR            = 0x01;
static const uint8_t _I2C_COMMUNICATION       = 0x00;
static const uint8_t _SPI_COMMUNICATION       = 0x01;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __PEDOMETER3_DRV_SPI__

void pedometer3_spiDriverInit(T_PEDOMETER3_P gpioObj, T_PEDOMETER3_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    _communication = _SPI_COMMUNICATION;
    hal_gpio_csSet( 1 );
}

#endif
#ifdef   __PEDOMETER3_DRV_I2C__

void pedometer3_i2cDriverInit(T_PEDOMETER3_P gpioObj, T_PEDOMETER3_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    _communication = _I2C_COMMUNICATION;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
    hal_gpio_csSet( 1 );
}

#endif
#ifdef   __PEDOMETER3_DRV_UART__

void pedometer3_uartDriverInit(T_PEDOMETER3_P gpioObj, T_PEDOMETER3_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}
#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void pedometer3_writeByte(uint8_t reg_addr, uint8_t _data)
{
    uint8_t writeReg[ 2 ];
    
    writeReg[ 0 ] = reg_addr;
    writeReg[ 1 ] = _data;
    
    if (_communication == _I2C_COMMUNICATION)
    {
        hal_i2cStart();
        hal_i2cWrite(_slaveAddress, writeReg, 2, END_MODE_STOP);
    }
    else
    {
        hal_gpio_csSet( 0 );
        hal_spiWrite(writeReg, 2);
        hal_gpio_csSet( 1 );
    }
}

uint8_t pedometer3_readByte(uint8_t reg_addr)
{
    uint8_t writeReg[ 2 ];
    uint8_t readReg[ 2 ];

    writeReg[ 0 ] = reg_addr;

    if (_communication == _I2C_COMMUNICATION)
    {
        hal_i2cStart();
        hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_RESTART);
        hal_i2cRead(_slaveAddress, readReg, 1, END_MODE_STOP);
    
        return readReg[ 0 ];
    }
    else
    {
        writeReg[ 0 ] = reg_addr | 0x80;
        hal_gpio_csSet( 0 );
        hal_spiTransfer(writeReg, readReg, 2);
        hal_gpio_csSet( 1 );
        
        return readReg[ 1 ];
    }
}

uint16_t pedometer3_readData(uint8_t reg_addr)
{
    uint8_t writeReg[ 3 ];
    uint8_t readReg[ 3 ];
    uint16_t readData;
    
    writeReg[ 0 ] = reg_addr;

    if (_communication == _I2C_COMMUNICATION)
    {
        hal_i2cStart();
        hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_RESTART);
        hal_i2cRead(_slaveAddress, readReg, 2, END_MODE_STOP);
    
        readData = readReg[ 1 ];
        readData = readData << 8;
        readData = readData | readReg[ 0 ];
    }
    else
    {
        writeReg[ 0 ] = reg_addr | 0x80;
        hal_gpio_csSet( 0 );
        Delay_1us();
        hal_spiTransfer(writeReg, readReg, 3);
        hal_gpio_csSet( 1 );
        
        readData = readReg[ 2 ];
        readData = readData << 8;
        readData = readData | readReg[ 1 ];
    }
    
    return readData;
}

void pedometer3_getAccelAxis(int16_t *x_axis, int16_t *y_axis, int16_t *z_axis)
{
    *x_axis = pedometer3_readData(_PEDOMETER3_REG_X_AXIS_OUTPUT_LOW);
    *y_axis = pedometer3_readData(_PEDOMETER3_REG_Y_AXIS_OUTPUT_LOW);
    *z_axis = pedometer3_readData(_PEDOMETER3_REG_Z_AXIS_OUTPUT_LOW);
}

void pedometer3_getHighPassAccelAxis(int16_t *x_axis, int16_t *y_axis, int16_t *z_axis)
{
    *x_axis = pedometer3_readData(_PEDOMETER3_REG_X_AXIS_HIGH_PASS_LOW);
    *y_axis = pedometer3_readData(_PEDOMETER3_REG_Y_AXIS_HIGH_PASS_LOW);
    *z_axis = pedometer3_readData(_PEDOMETER3_REG_Z_AXIS_HIGH_PASS_LOW);
}

void pedometer3_startConfiguration()
{
    pedometer3_writeByte(_PEDOMETER3_REG_CONTROL_1, _PEDOMETER3_CNTL1_MODE_STAND_BY |
                                                    _PEDOMETER3_CNTL1_RES_MODE_HIGHER_NOISE |
                                                    _PEDOMETER3_CNTL1_DATA_READY_DISABLE |
                                                    _PEDOMETER3_CNTL1_G_RANGE_8g |
                                                    _PEDOMETER3_CNTL1_PEDOMETER_DISABLE |
                                                    _PEDOMETER3_CNTL1_TILT_DISABLE |
                                                    _PEDOMETER3_CNTL1_TAP_DISABLE);
    
    pedometer3_writeByte(_PEDOMETER3_REG_CONTROL_2, _PEDOMETER3_CNTL2_SOFTWARE_RESET_NO_ACTIVE |
                                                    _PEDOMETER3_CNTL2_COMMAND_TEST_NO_ACTIVE |
                                                    _PEDOMETER3_CNTL2_DOWN_STATE_ENABLE |
                                                    _PEDOMETER3_CNTL2_FACE_DOWN_STATE_ENABLE |
                                                    _PEDOMETER3_CNTL2_FACE_UP_STATE_ENABLE |
                                                    _PEDOMETER3_CNTL2_LEFT_STATE_ENABLE |
                                                    _PEDOMETER3_CNTL2_RIGHT_STATE_ENABLE |
                                                    _PEDOMETER3_CNTL2_UP_STATE_ENABLE );
    
    pedometer3_writeByte(_PEDOMETER3_REG_CONTROL_3, _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_12_5Hz |
                                                    _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_400Hz |
                                                    _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_0_781Hz );
    
    pedometer3_writeByte(_PEDOMETER3_REG_CONTROL_4, _PEDOMETER3_CNTL4_COUNTER_DECREMENT_MODE |
                                                    _PEDOMETER3_CNTL4_THRESHOLD_MODE_ABSOLUTE |
                                                    _PEDOMETER3_CNTL4_WAKE_UP_DISABLE |
                                                    _PEDOMETER3_CNTL4_BACK_TO_SLEEP_DISABLE |
                                                    _PEDOMETER3_CNTL4_HIGH_PASS_ENABLE |
                                                    _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_0_781Hz );
    
    pedometer3_writeByte(_PEDOMETER3_REG_CONTROL_5, _PEDOMETER3_CNTL5_MANUAL_WAKE_UP_0 | _PEDOMETER3_CNTL5_MANUAL_SLEEP_UP_0);
    
    pedometer3_writeByte(_PEDOMETER3_REG_OUTPUT_DATA_CONTROL, _PEDOMETER3_ODCNTL_IR_BYPASS_FILTERING_APPLIED |
                                                              _PEDOMETER3_ODCNTL_LPRO_ODR_9 |
                                                              _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_50Hz );

    pedometer3_setPedometerStepWatermark( 10000 );

    pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_2, _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_4 | _PEDOMETER3_PED_CNTL2_ODR_SELECT_100Hz);
    pedometer3_writeByte(_PEDOMETER3_REG_LOW_POWER_CONTROL, 0x7B );

    pedometer3_writeByte(_PEDOMETER3_REG_INTERRUPT_CONTROL_7, _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_2_ENABLE |
                                                              _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_2_ENABLE |
                                                              _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_1_ENABLE );

    pedometer3_writeByte(_PEDOMETER3_REG_INTERRUPT_CONTROL_1, _PEDOMETER3_INC1_PHYSICAL_INTERRUPT_ENABLE );
    pedometer3_writeByte(_PEDOMETER3_REG_INTERRUPT_CONTROL_5, _PEDOMETER3_INC5_PHYSICAL_INTERRUPT_ENABLE );
    pedometer3_pedometerCongif( 100 ); // 100Hz or 50Hz
}

void pedometer3_setPedometerStepWatermark(uint16_t value)
{
    pedometer3_writeByte(_PEDOMETER3_REG_PED_STPWM_LOW, value >> 8);
    pedometer3_writeByte(_PEDOMETER3_REG_PED_STPWM_HIGH, value & 0x00FF);
}

void pedometer3_pedometerCongif(uint8_t ODR)
{
    if(ODR == 100)
    {
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_1, 0x66);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_2, 0x2C);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_3, 0x17);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_4, 0x1F);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_5, 0x24);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_6, 0x13);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_7, 0x0B);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_8, 0x08);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_9, 0x19);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_10, 0x1C);
    }
    else
    {
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_1, 0x56);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_2, 0x26);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_3, 0x17);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_4, 0x1F);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_5, 0x0E);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_6, 0x0B);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_7, 0x02);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_8, 0x03);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_9, 0x0D);
        pedometer3_writeByte(_PEDOMETER3_REG_PEDOMETER_CONTROL_10, 0x10);
    }
}

uint16_t pedometer3_getPedometerStepCounter()
{
    return pedometer3_readData( _PEDOMETER3_REG_PAD_STEP_LOW );
}

void pedometer3_getTiltPosition(uint8_t *current_pos, uint8_t *previous_pos)
{
    uint8_t previousTiltPosition;
    uint8_t currentTiltPosition;
    
    previousTiltPosition = pedometer3_readByte(_PEDOMETER3_REG_PREVIOUS_TILT_POSITION );
    currentTiltPosition = pedometer3_readByte(_PEDOMETER3_REG_CURRENT_TILT_POSITION);

    if((currentTiltPosition & 0x20) != 0)
    {
        *current_pos = _PEDOMETER3_TILT_POSITION_LEFT;
    }
    else if((currentTiltPosition & 0x10) != 0)
    {
        *current_pos = _PEDOMETER3_TILT_POSITION_RIGHT;
    }
    else if((currentTiltPosition & 0x08) != 0)
    {
        *current_pos = _PEDOMETER3_TILT_POSITION_DOWN;
    }
    else if((currentTiltPosition & 0x04) != 0)
    {
        *current_pos = _PEDOMETER3_TILT_POSITION_UP;
    }
    else if((currentTiltPosition & 0x02) != 0)
    {
        *current_pos = _PEDOMETER3_TILT_POSITION_FACE_DOWN;
    }
    else if((currentTiltPosition & 0x01) != 0)
    {
        *current_pos = _PEDOMETER3_TILT_POSITION_FACE_UP;
    }
    
    if((previousTiltPosition & 0x20) != 0)
    {
        *previous_pos = _PEDOMETER3_TILT_POSITION_LEFT;
    }
    else if((previousTiltPosition & 0x10) != 0)
    {
        *previous_pos = _PEDOMETER3_TILT_POSITION_RIGHT;
    }
    else if((previousTiltPosition & 0x08) != 0)
    {
        *previous_pos = _PEDOMETER3_TILT_POSITION_DOWN;
    }
    else if((previousTiltPosition & 0x04) != 0)
    {
        *previous_pos = _PEDOMETER3_TILT_POSITION_UP;
    }
    else if((previousTiltPosition & 0x02) != 0)
    {
        *previous_pos = _PEDOMETER3_TILT_POSITION_FACE_DOWN;
    }
    else if((previousTiltPosition & 0x01) != 0)
    {
        *previous_pos = _PEDOMETER3_TILT_POSITION_FACE_UP;
    }
}

void pedometer3_getTapDetection(uint8_t *tap)
{
    uint8_t readTap;
    
    readTap = pedometer3_readByte(0x14 );
    
    if((readTap & 0x20) != 0)
    {
        *tap = _PEDOMETER3_TAP_X_NEGATIVE;
    }
    else if((readTap & 0x10) != 0)
    {
        *tap = _PEDOMETER3_TAP_X_POSITIVE;
    }
    else if((readTap & 0x08) != 0)
    {
        *tap = _PEDOMETER3_TAP_Y_NEGATIVE;
    }
    else if((readTap & 0x04) != 0)
    {
        *tap = _PEDOMETER3_TAP_Y_POSITIVE;
    }
    else if((readTap & 0x02) != 0)
    {
        *tap = _PEDOMETER3_TAP_Z_NEGATIVE;
    }
    else if((readTap & 0x01) != 0)
    {
        *tap = _PEDOMETER3_TAP_Z_POSITIVE;
    }
}

uint8_t pedometer3_testCommunication()
{
    uint8_t writeReg[ 1 ];
    uint8_t device_ID[ 4 ];

    writeReg[ 0 ] = 0x00;

    if (_communication == _I2C_COMMUNICATION)
    {
        hal_i2cStart();
        hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_RESTART);
        hal_i2cRead(_slaveAddress, device_ID, 4, END_MODE_STOP);
    }
    else
    {
        writeReg[ 0 ] = 0x80;
        hal_gpio_csSet( 0 );
        hal_spiWrite(writeReg, 1);
        hal_spiRead(device_ID, 4);
        hal_gpio_csSet( 1 );
    }

    if(((device_ID[ 0 ] == 0x4B) && (device_ID[ 1 ] == 0x69) && (device_ID[ 2 ] == 0x6F) && (device_ID[ 3 ] == 0x6E)) == 1)
    {
        return _DEVICE_OK;
    }
    else
    {
        return _DEVICE_ERROR;
    }
}

uint8_t pedometer3_getInterrupt1()
{
    return hal_gpio_intGet();
}

uint8_t pedometer3_getInterrupt2()
{
    return hal_gpio_rstGet();
}

uint8_t pedometer3_getTriggerInterrupt()
{
    return hal_gpio_anGet();
}


/* -------------------------------------------------------------------------- */
/*
  __pedometer3_driver.c

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