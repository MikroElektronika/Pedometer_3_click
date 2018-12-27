#line 1 "D:/Clicks_git/P/Pedometer_3_click/SW/example/c/PIC32/I2C/Click_Pedometer3_PIC32.c"
#line 1 "d:/clicks_git/p/pedometer_3_click/sw/example/c/pic32/i2c/click_pedometer3_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for pic32/include/stdint.h"




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
#line 1 "d:/clicks_git/p/pedometer_3_click/sw/example/c/pic32/i2c/click_pedometer3_config.h"
#line 1 "d:/clicks_git/p/pedometer_3_click/sw/example/c/pic32/i2c/click_pedometer3_types.h"
#line 4 "d:/clicks_git/p/pedometer_3_click/sw/example/c/pic32/i2c/click_pedometer3_config.h"
const uint32_t _PEDOMETER3_SPI_CFG[ 7 ] =
{
 _SPI_MASTER,
 _SPI_8_BIT,
 80,
 _SPI_SS_DISABLE,
 _SPI_DATA_SAMPLE_MIDDLE,
 _SPI_CLK_IDLE_LOW,
 _SPI_IDLE_2_ACTIVE
};



const uint32_t _PEDOMETER3_I2C_CFG[ 1 ] =
{
 100000
};
#line 1 "d:/clicks_git/p/pedometer_3_click/sw/library/__pedometer3_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for pic32/include/stdint.h"
#line 58 "d:/clicks_git/p/pedometer_3_click/sw/library/__pedometer3_driver.h"
extern const uint8_t _PEDOMETER3_REG_MANUFACTURING_ID ;
extern const uint8_t _PEDOMETER3_REG_PART_ID ;
extern const uint8_t _PEDOMETER3_REG_X_AXIS_HIGH_PASS_LOW ;
extern const uint8_t _PEDOMETER3_REG_X_AXIS_HIGH_PASS_HIGH ;
extern const uint8_t _PEDOMETER3_REG_Y_AXIS_HIGH_PASS_LOW ;
extern const uint8_t _PEDOMETER3_REG_Y_AXIS_HIGH_PASS_HIGH ;
extern const uint8_t _PEDOMETER3_REG_Z_AXIS_HIGH_PASS_LOW ;
extern const uint8_t _PEDOMETER3_REG_Z_AXIS_HIGH_PASS_HIGH ;
extern const uint8_t _PEDOMETER3_REG_X_AXIS_OUTPUT_LOW ;
extern const uint8_t _PEDOMETER3_REG_X_AXIS_OUTPUT_HIGH ;
extern const uint8_t _PEDOMETER3_REG_Y_AXIS_OUTPUT_LOW ;
extern const uint8_t _PEDOMETER3_REG_Y_AXIS_OUTPUT_HIGH ;
extern const uint8_t _PEDOMETER3_REG_Z_AXIS_OUTPUT_LOW ;
extern const uint8_t _PEDOMETER3_REG_Z_AXIS_OUTPUT_HIGH ;
extern const uint8_t _PEDOMETER3_REG_PAD_STEP_LOW ;
extern const uint8_t _PEDOMETER3_REG_PAD_STEP_HIGH ;
extern const uint8_t _PEDOMETER3_REG_COMMAND_TEST_RESPONSE ;
extern const uint8_t _PEDOMETER3_REG_WHO_AM_I ;
extern const uint8_t _PEDOMETER3_REG_CURRENT_TILT_POSITION ;
extern const uint8_t _PEDOMETER3_REG_PREVIOUS_TILT_POSITON ;
extern const uint8_t _PEDOMETER3_REG_INS1 ;
extern const uint8_t _PEDOMETER3_REG_INS2 ;
extern const uint8_t _PEDOMETER3_REG_INS3 ;
extern const uint8_t _PEDOMETER3_REG_STATUS ;
extern const uint8_t _PEDOMETER3_REG_INT_REL ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_1 ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_2 ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_3 ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_4 ;
extern const uint8_t _PEDOMETER3_REG_CONTROL_5 ;
extern const uint8_t _PEDOMETER3_REG_OUTPUT_DATA_CONTROL ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_1 ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_2 ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_3 ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_4 ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_5 ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_6 ;
extern const uint8_t _PEDOMETER3_REG_INTERRUPT_CONTROL_7 ;
extern const uint8_t _PEDOMETER3_REG_TILT_TIMER ;
extern const uint8_t _PEDOMETER3_REG_TAP_REPORT_CONTROL ;
extern const uint8_t _PEDOMETER3_REG_DOUBLE_TAP_EVENT ;
extern const uint8_t _PEDOMETER3_REG_TAP_THRESHOLD_HIGH ;
extern const uint8_t _PEDOMETER3_REG_TAP_THRESHOLD_LOW ;
extern const uint8_t _PEDOMETER3_REG_FTD ;
extern const uint8_t _PEDOMETER3_REG_STD ;
extern const uint8_t _PEDOMETER3_REG_TLT ;
extern const uint8_t _PEDOMETER3_REG_TWS ;
extern const uint8_t _PEDOMETER3_REG_FREE_FALL_THRESHOLD ;
extern const uint8_t _PEDOMETER3_REG_FREE_FALL_COUNTER ;
extern const uint8_t _PEDOMETER3_REG_FREE_FALL_CONTROL ;
extern const uint8_t _PEDOMETER3_REG_TILT_ANGLE_LL ;
extern const uint8_t _PEDOMETER3_REG_TILT_ANGLE_HL ;
extern const uint8_t _PEDOMETER3_REG_HYSTERESIS_SET ;
extern const uint8_t _PEDOMETER3_REG_LOW_POWER_CONTROL ;
extern const uint8_t _PEDOMETER3_REG_WUFTH ;
extern const uint8_t _PEDOMETER3_REG_BTSWUFTH ;
extern const uint8_t _PEDOMETER3_REG_BTSTH ;
extern const uint8_t _PEDOMETER3_REG_BTS_MOTION_DETECTION ;
extern const uint8_t _PEDOMETER3_REG_WUF_MOTION_DETECTION ;
extern const uint8_t _PEDOMETER3_REG_PED_STPWM_LOW ;
extern const uint8_t _PEDOMETER3_REG_PED_STPWM_HIGH ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_1 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_2 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_3 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_4 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_5 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_6 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_7 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_8 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_9 ;
extern const uint8_t _PEDOMETER3_REG_PEDOMETER_CONTROL_10 ;
extern const uint8_t _PEDOMETER3_REG_SELF_TEST ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_CONTROL_1 ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_CONTROL_2 ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_STATUS_1 ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_STATUS_2 ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_CLEAR ;
extern const uint8_t _PEDOMETER3_REG_BUFFER_READ ;



extern const uint8_t _PEDOMETER3_POSITON_BIT_LEFT_X_NEGATIVE ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_RIGHT_X_POSITIVE ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_DOWN_Y_NEGATIVE ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_UP_Y_POSITIVE ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_FACE_DOWN_Y_NEGATIVE ;
extern const uint8_t _PEDOMETER3_POSITON_BIT_FACE_UP_Y_POSITIVE ;



extern const uint8_t _PEDOMETER3_INS1_STPOVI ;
extern const uint8_t _PEDOMETER3_INS1_STPWMI ;
extern const uint8_t _PEDOMETER3_INS1_TLE ;
extern const uint8_t _PEDOMETER3_INS1_TRI ;
extern const uint8_t _PEDOMETER3_INS1_TDO ;
extern const uint8_t _PEDOMETER3_INS1_TUO ;
extern const uint8_t _PEDOMETER3_INS1_TFD ;
extern const uint8_t _PEDOMETER3_INS1_TFU ;

extern const uint8_t _PEDOMETER3_INS2_FFS ;
extern const uint8_t _PEDOMETER3_INS2_BFI ;
extern const uint8_t _PEDOMETER3_INS2_WMI ;
extern const uint8_t _PEDOMETER3_INS2_DRDY ;
extern const uint8_t _PEDOMETER3_INS2_TDTS_NO_TAP ;
extern const uint8_t _PEDOMETER3_INS2_TDTS_SINGLE_TAP ;
extern const uint8_t _PEDOMETER3_INS2_TDTS_DOUBLE_TAP ;
extern const uint8_t _PEDOMETER3_INS2_STPINCI ;
extern const uint8_t _PEDOMETER3_INS2_TPS ;

extern const uint8_t _PEDOMETER3_INS3_WUFS ;
extern const uint8_t _PEDOMETER3_INS3_BTS ;
extern const uint8_t _PEDOMETER3_INS3_XNWU ;
extern const uint8_t _PEDOMETER3_INS3_XPWU ;
extern const uint8_t _PEDOMETER3_INS3_YNWU ;
extern const uint8_t _PEDOMETER3_INS3_YPWU ;
extern const uint8_t _PEDOMETER3_INS3_ZNWU ;
extern const uint8_t _PEDOMETER3_INS3_ZPWU ;


extern const uint8_t _PEDOMETER3_STATUS_NO_INT ;
extern const uint8_t _PEDOMETER3_STATUS_INT_ACTIVE ;
extern const uint8_t _PEDOMETER3_STATUS_BACK_TO_SLEEP;
extern const uint8_t _PEDOMETER3_STATUS_WAKE_UP ;


extern const uint8_t _PEDOMETER3_CNTL1_MODE_STAND_BY ;
extern const uint8_t _PEDOMETER3_CNTL1_MODE_LOW_POWER ;
extern const uint8_t _PEDOMETER3_CNTL1_RES_MODE_HIGHER_NOISE ;
extern const uint8_t _PEDOMETER3_CNTL1_RES_MODE_LOWER_NOISE ;
extern const uint8_t _PEDOMETER3_CNTL1_DATA_READY_DISABLE ;
extern const uint8_t _PEDOMETER3_CNTL1_DATA_READY_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL1_G_RANGE_2g ;
extern const uint8_t _PEDOMETER3_CNTL1_G_RANGE_4g ;
extern const uint8_t _PEDOMETER3_CNTL1_G_RANGE_8g ;
extern const uint8_t _PEDOMETER3_CNTL1_TAP_DISABLE ;
extern const uint8_t _PEDOMETER3_CNTL1_TAP_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL1_PEDOMETER_DISABLE ;
extern const uint8_t _PEDOMETER3_CNTL1_PEDOMETER_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL1_TILT_DISABLE ;
extern const uint8_t _PEDOMETER3_CNTL1_TILT_ENABLE ;


extern const uint8_t _PEDOMETER3_CNTL2_SOFTWARE_RESET_ACTIVE ;
extern const uint8_t _PEDOMETER3_CNTL2_SOFTWARE_RESET_NO_ACTIVE ;
extern const uint8_t _PEDOMETER3_CNTL2_COMMAND_TEST_ACTIVE ;
extern const uint8_t _PEDOMETER3_CNTL2_COMMAND_TEST_NO_ACTIVE ;
extern const uint8_t _PEDOMETER3_CNTL2_LEFT_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL2_RIGHT_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL2_DOWN_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL2_UP_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL2_FACE_DOWN_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL2_FACE_UP_STATE_ENABLE ;


extern const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_1_563Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_6_25Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_12_5Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OTP_OUTPUT_DATA_RATE_50Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_50Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_100Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_200Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_400Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_12_5Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_25Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_800Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_TAP_OUTPUT_DATA_RATE_1600Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_0_781Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_1_563Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_3_125Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_6_250Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_12_5Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_25Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_50Hz ;
extern const uint8_t _PEDOMETER3_CNTL3_OWUF_OUTPUT_DATA_RATE_100Hz ;


extern const uint8_t _PEDOMETER3_CNTL4_COUNTER_CLEAR_MODE ;
extern const uint8_t _PEDOMETER3_CNTL4_COUNTER_DECREMENT_MODE ;
extern const uint8_t _PEDOMETER3_CNTL4_THRESHOLD_MODE_ABSOLUTE ;
extern const uint8_t _PEDOMETER3_CNTL4_THRESHOLD_MODE_RELATIVE ;
extern const uint8_t _PEDOMETER3_CNTL4_WAKE_UP_DISABLE ;
extern const uint8_t _PEDOMETER3_CNTL4_WAKE_UP_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL4_BACK_TO_SLEEP_DISABLE ;
extern const uint8_t _PEDOMETER3_CNTL4_BACK_TO_SLEEP_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL4_HIGH_PASS_DISABLE ;
extern const uint8_t _PEDOMETER3_CNTL4_HIGH_PASS_ENABLE ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_0_781Hz ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_1_563Hz ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_3_125Hz ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_6_250Hz ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_12_5Hz ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_25Hz ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_50Hz ;
extern const uint8_t _PEDOMETER3_CNTL4_OBTS_OUTPUT_DATA_RATE_100Hz ;


extern const uint8_t _PEDOMETER3_CNTL5_MANUAL_WAKE_UP_0 ;
extern const uint8_t _PEDOMETER3_CNTL5_MANUAL_WAKE_UP_1 ;
extern const uint8_t _PEDOMETER3_CNTL5_MANUAL_SLEEP_UP_0 ;
extern const uint8_t _PEDOMETER3_CNTL5_MANUAL_SLEEP_UP_1 ;


extern const uint8_t _PEDOMETER3_ODCNTL_IR_BYPASS_FILTERING_APPLIED ;
extern const uint8_t _PEDOMETER3_ODCNTL_IR_BYPASS_FILTER_BYPASSED ;
extern const uint8_t _PEDOMETER3_ODCNTL_LPRO_ODR_9 ;
extern const uint8_t _PEDOMETER3_ODCNTL_LPRO_ODR_2 ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_12_5Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_25Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_50Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_100Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_200Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_400Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_800Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_1600Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_0_781Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_1_563Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_3_125Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_6_25Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_3200Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_6400Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_12800Hz ;
extern const uint8_t _PEDOMETER3_ODCNTL_OSA_OUTPUT_DATA_RATE_25600Hz ;


extern const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_50uSec ;
extern const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA_PERIOD ;
extern const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA2_PERIOD ;
extern const uint8_t _PEDOMETER3_INC1_PULSE_INTERRUPT_1_OSA4_PERIOD ;
extern const uint8_t _PEDOMETER3_INC1_PHYSICAL_INTERRUPT_DISABLE ;
extern const uint8_t _PEDOMETER3_INC1_PHYSICAL_INTERRUPT_ENABLE ;
extern const uint8_t _PEDOMETER3_INC1_INTERRUPT_ACTIVE_LEVEL_LOW ;
extern const uint8_t _PEDOMETER3_INC1_INTERRUPT_ACTIVE_LEVEL_HIGH ;
extern const uint8_t _PEDOMETER3_INC1_INTERRUPT_LATCHED ;
extern const uint8_t _PEDOMETER3_INC1_INTERRUPT_PULSED ;
extern const uint8_t _PEDOMETER3_INC1_SELF_TEST_POLARITY_NEGATIVE ;
extern const uint8_t _PEDOMETER3_INC1_SELF_TEST_POLARITY_POSITIVE ;
extern const uint8_t _PEDOMETER3_INC1_3_WIRE_SPI_INTERFACE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC1_3_WIRE_SPI_INTERFACE_ENABLED ;


extern const uint8_t _PEDOMETER3_INC2_AOI_ACTIVE_STATE_IN_OR ;
extern const uint8_t _PEDOMETER3_INC2_AOI_ACTIVE_STATE_IN_AND ;
extern const uint8_t _PEDOMETER3_INC2_X_NEGATIVE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC2_X_NEGATIVE_ENABEL ;
extern const uint8_t _PEDOMETER3_INC2_Y_NEGATIVE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC2_Y_NEGATIVE_ENABEL ;
extern const uint8_t _PEDOMETER3_INC2_Z_NEGATIVE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC2_Z_NEGATIVE_ENABEL ;
extern const uint8_t _PEDOMETER3_INC2_X_POSITIVE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC2_X_POSITIVE_ENABEL ;
extern const uint8_t _PEDOMETER3_INC2_Y_POSITIVE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC2_Y_POSITIVE_ENABEL ;
extern const uint8_t _PEDOMETER3_INC2_Z_POSITIVE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC2_Z_POSITIVE_ENABEL ;


extern const uint8_t _PEDOMETER3_INC3_ALTERNATE_TAP_DISABLE ;
extern const uint8_t _PEDOMETER3_INC3_ALTERNATE_TAP_ENABLE ;
extern const uint8_t _PEDOMETER3_INC3_LEFT_STATE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC3_LEFT_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_INC3_RIGHT_STATE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC3_RIGHT_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_INC3_DOWN_STATE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC3_DOWN_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_INC3_UP_STATE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC3_UP_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_INC3_FACE_DOWN_STATE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC3_FACE_DOWN_STATE_ENABLE ;
extern const uint8_t _PEDOMETER3_INC3_FACE_UP_STATE_DISABLE ;
extern const uint8_t _PEDOMETER3_INC3_FACE_UP_STATE_ENABLE ;


extern const uint8_t _PEDOMETER3_INC4_FREE_FALL_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_FREE_FALL_INTERRUPT_1_ENABLE ;
extern const uint8_t _PEDOMETER3_INC4_BUFFER_FULL_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_BUFFER_FULL_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_WATERMARK_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_WATERMARK_INTERRUPT_1_ENABLE ;
extern const uint8_t _PEDOMETER3_INC4_DATA_READY_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_DATA_READY_INTERRUPT_1_ENABLE ;
extern const uint8_t _PEDOMETER3_INC4_BACK_TO_SLEEP_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_BACK_TO_SLEEP_INTERRUPT_1_ENABLE ;
extern const uint8_t _PEDOMETER3_INC4_TAP_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_TAP_INTERRUPT_1_ENABLE ;
extern const uint8_t _PEDOMETER3_INC4_WAKE_UP_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_WAKE_UP_INTERRUPT_1_ENABLE ;
extern const uint8_t _PEDOMETER3_INC4_TILT_POSITION_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC4_TILT_POSITION_INTERRUPT_1_ENABLE ;


extern const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_50uSec ;
extern const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA_PERIOD ;
extern const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA2_PERIOD ;
extern const uint8_t _PEDOMETER3_INC5_PULSE_INTERRUPT_2_OSA4_PERIOD ;
extern const uint8_t _PEDOMETER3_INC5_PHYSICAL_INTERRUPT_DISABLE ;
extern const uint8_t _PEDOMETER3_INC5_PHYSICAL_INTERRUPT_ENABLE ;
extern const uint8_t _PEDOMETER3_INC5_INTERRUPT_ACTIVE_LEVEL_LOW ;
extern const uint8_t _PEDOMETER3_INC5_INTERRUPT_ACTIVE_LEVEL_HIGH ;
extern const uint8_t _PEDOMETER3_INC5_INTERRUPT_LATCHED ;
extern const uint8_t _PEDOMETER3_INC5_INTERRUPT_PULSED ;
extern const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC5_LATCHED_INTERRUPT_1_ENABLE ;


extern const uint8_t _PEDOMETER3_INC6_FREE_FALL_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_FREE_FALL_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC6_BUFFER_FULL_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_BUFFER_FULL_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_WATERMARK_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_WATERMARK_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC6_DATA_READY_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_DATA_READY_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC6_BACK_TO_SLEEP_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_BACK_TO_SLEEP_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC6_TAP_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_TAP_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC6_WAKE_UP_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_WAKE_UP_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC6_TILT_POSITION_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC6_TILT_POSITION_INTERRUPT_2_ENABLE ;


extern const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_2_DISABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_2_ENABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_OVERFLOW_INTERRUPT_1_ENABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_WATERMARK_INTERRUPT_1_ENABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_1_DISABLE ;
extern const uint8_t _PEDOMETER3_INC7_STEP_INCREMENT_INTERRUPT_1_ENABLE ;


extern const uint8_t _PEDOMETER3_TDTRC_DOUBLE_TAP_INTERRUPT_DISABLE ;
extern const uint8_t _PEDOMETER3_TDTRC_DOUBLE_TAP_INTERRUPT_ENABLE ;
extern const uint8_t _PEDOMETER3_TDTRC_SINGLE_TAP_INTERRUPT_DISABLE ;
extern const uint8_t _PEDOMETER3_TDTRC_SINGLE_TAP_INTERRUPT_ENABLE ;


extern const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_DISABLE ;
extern const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_ENABLE ;
extern const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_INTERRUPT_LATCH_DISABLE ;
extern const uint8_t _PEDOMETER3_FFCNTL_FREE_FALL_INTERRUPT_UNLATCH_ENABLE ;
extern const uint8_t _PEDOMETER3_FFCNTL_DEBOUNCE_METHODOLOGY_DISABLE ;
extern const uint8_t _PEDOMETER3_FFCNTL_DEBOUNCE_METHODOLOGY_ENABLE ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_12_5Hz ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_25Hz ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_50Hz ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_100Hz ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_200Hz ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_400Hz ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_800Hz ;
extern const uint8_t _PEDOMETER3_FFCNTL_OFFI_OUTPUT_DATA_RATE_1600Hz ;


extern const uint8_t _PEDOMETER3_LP_CNTL_NO_AVERAGING ;
extern const uint8_t _PEDOMETER3_LP_CNTL_2_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_4_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_8_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_16_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_32_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_64_SAMPLES_AVERAGED ;
extern const uint8_t _PEDOMETER3_LP_CNTL_128_SAMPLES_AVERAGED;


extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_NO_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_2_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_4_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_6_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_8_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_10_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_12_STEPS ;
extern const uint8_t _PEDOMETER3_PED_CNTL1_STEP_TH_14_STEPS ;


extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_1 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_2 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_4 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_8 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_16 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_32 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_64 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_HIGH_PASS_FILTER_128 ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_ODR_SELECT_100Hz ;
extern const uint8_t _PEDOMETER3_PED_CNTL2_ODR_SELECT_50Hz ;


extern const uint8_t _PEDOMETER3_SLAVE_ADDRESS_0;
extern const uint8_t _PEDOMETER3_SLAVE_ADDRESS_1;
#line 466 "d:/clicks_git/p/pedometer_3_click/sw/library/__pedometer3_driver.h"
void pedometer3_spiDriverInit( const uint8_t*  gpioObj,  const uint8_t*  spiObj);


void pedometer3_i2cDriverInit( const uint8_t*  gpioObj,  const uint8_t*  i2cObj, uint8_t slave);
#line 476 "d:/clicks_git/p/pedometer_3_click/sw/library/__pedometer3_driver.h"
void pedometer3_gpioDriverInit( const uint8_t*  gpioObj);



void pedometer3_writeByte(uint8_t reg_addr, uint8_t _data);

uint8_t pedometer3_readByte(uint8_t reg_addr);

uint16_t pedometer3_readData(uint8_t reg_addr);
#line 29 "D:/Clicks_git/P/Pedometer_3_click/SW/example/c/PIC32/I2C/Click_Pedometer3_PIC32.c"
uint8_t readReg;
char demoText[ 50 ];

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
 mikrobus_i2cInit( _MIKROBUS1, &_PEDOMETER3_I2C_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 115200 );
 mikrobus_logWrite(" --- System Init --- ", _LOG_LINE);
 Delay_ms( 100 );
}

void applicationInit()
{
 pedometer3_i2cDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_I2C, 0x1F );
 pedometer3_writeByte(0x7F, 0x00);
 Delay_10ms();
 pedometer3_writeByte(0x1B, 0x00);
 Delay_100ms();
 pedometer3_writeByte(0x1B, 0x80);
 Delay_1sec();

 readReg = pedometer3_readByte(0x11);
 IntToHex(readReg, demoText);
 mikrobus_logWrite(" Who am I :  ", _LOG_TEXT);
 mikrobus_logWrite(demoText, _LOG_LINE);
}

void applicationTask()
{

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
