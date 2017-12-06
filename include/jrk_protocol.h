#ifndef _JRK_PROTOCOL_H
#define _JRK_PROTOCOL_H

#define JRK_CMD_REINITIALIZE 0x10
#define JRK_CMD_SET_SETTING 0x13
#define JRK_CMD_GET_DEBUG_DATA 0x20
#define JRK_CMD_GET_VARIABLE_SERIAL 0x80
#define JRK_CMD_GET_ERROR_FLAGS_HALTING_SERIAL 0xB3
#define JRK_CMD_GET_ERROR_FLAGS_OCCURRED_SERIAL 0xB5
#define JRK_CMD_SET_TARGET_USB 0x84
#define JRK_CMD_MOTOR_OFF_USB 0x87
#define JRK_CMD_SET_TARGET_SERIAL 0xC0
#define JRK_CMD_SET_TARGET_LOW_RES_FWD 0xE0
#define JRK_CMD_SET_TARGET_LOW_RES_REV 0xE1
#define JRK_CMD_GET_SETTING 0xE3
#define JRK_CMD_GET_VARIABLES 0xE5
#define JRK_CMD_TEMP_SET_VARIABLE 0xE6
#define JRK_CMD_OVERRIDE_DUTY_CYCLE 0xE9
#define JRK_CMD_MOTOR_OFF_SERIAL 0xFF
#define JRK_CMD_START_BOOTLOADER 0xFF

#define JRK_VARIABLES_SIZE 128  // TODO

#define JRK_SETTING_NOT_INITIALIZED 0x00
#define JRK_SETTING_INPUT_MODE 0x01
#define JRK_SETTING_INPUT_DISCONNECT_MINIMUM 0x02
#define JRK_SETTING_INPUT_DISCONNECT_MAXIMUM 0x04
#define JRK_SETTING_INPUT_MINIMUM 0x06
#define JRK_SETTING_INPUT_MAXIMUM 0x08
#define JRK_SETTING_INPUT_NEUTRAL_MAXIMUM 0x0A
#define JRK_SETTING_INPUT_NEUTRAL_MINIMUM 0x0C
#define JRK_SETTING_OUTPUT_MINIMUM 0x0E
#define JRK_SETTING_OUTPUT_NEUTRAL 0x10
#define JRK_SETTING_OUTPUT_MAXIMUM 0x12
#define JRK_SETTING_INPUT_INVERT 0x14
#define JRK_SETTING_INPUT_SCALING_DEGREE 0x15
#define JRK_SETTING_INPUT_POWER_WITH_AUX 0x16
#define JRK_SETTING_INPUT_ANALOG_SAMPLES_EXPONENT 0x17
#define JRK_SETTING_FEEDBACK_MODE 0x18
#define JRK_SETTING_FEEDBACK_DISCONNECT_MINIMUM 0x19
#define JRK_SETTING_FEEDBACK_DISCONNECT_MAXIMUM 0x1B
#define JRK_SETTING_FEEDBACK_MINIMUM 0x1D
#define JRK_SETTING_FEEDBACK_MAXIMUM 0x1F
#define JRK_SETTING_FEEDBACK_INVERT 0x21
#define JRK_SETTING_FEEDBACK_POWER_WITH_AUX 0x22
#define JRK_SETTING_FEEDBACK_DEAD_ZONE 0x23
#define JRK_SETTING_FEEDBACK_ANALOG_SAMPLES_EXPONENT 0x24
#define JRK_SETTING_FEEDBACK_WRAPAROUND 0x25
#define JRK_SETTING_SERIAL_MODE 0x26
#define JRK_SETTING_SERIAL_BAUD_RATE_GENERATOR 0x27
#define JRK_SETTING_SERIAL_TIMEOUT 0x29
#define JRK_SETTING_SERIAL_ENABLE_CRC 0x2B
#define JRK_SETTING_SERIAL_DEVICE_NUMBER 0x2C
#define JRK_SETTING_NEVER_SLEEP 0x2D
#define JRK_SETTING_PROPORTIONAL_MULTIPLIER 0x2E
#define JRK_SETTING_PROPORTIONAL_EXPONENT 0x30
#define JRK_SETTING_INTEGRAL_MULTIPLIER 0x31
#define JRK_SETTING_INTEGRAL_EXPONENT 0x33
#define JRK_SETTING_DERIVATIVE_MULTIPLIER 0x34
#define JRK_SETTING_DERIVATIVE_EXPONENT 0x36
#define JRK_SETTING_PID_PERIOD 0x37
#define JRK_SETTING_PID_INTEGRAL_LIMIT 0x39
#define JRK_SETTING_PID_RESET_INTEGRAL 0x3B
#define JRK_SETTING_MOTOR_PWM_FREQUENCY 0x3C
#define JRK_SETTING_MOTOR_INVERT 0x3D
#define JRK_SETTING_MOTOR_MAX_DUTY_CYCLE_WHILE_FEEDBACK_OUT_OF_RANGE 0x3E
#define JRK_SETTING_MOTOR_MAX_ACCELERATION_FORWARD 0x40
#define JRK_SETTING_MOTOR_MAX_ACCELERATION_REVERSE 0x42
#define JRK_SETTING_MOTOR_MAX_DECELERATION_FORWARD 0x44
#define JRK_SETTING_MOTOR_MAX_DECELERATION_REVERSE 0x46
#define JRK_SETTING_MOTOR_MAX_DUTY_CYCLE_FORWARD 0x48
#define JRK_SETTING_MOTOR_MAX_DUTY_CYCLE_REVERSE 0x4A
#define JRK_SETTING_MOTOR_MAX_CURRENT_FORWARD 0x4C
#define JRK_SETTING_MOTOR_MAX_CURRENT_REVERSE 0x4D
#define JRK_SETTING_MOTOR_CURRENT_CALIBRATION_FORWARD 0x4E
#define JRK_SETTING_MOTOR_CURRENT_CALIBRATION_REVERSE 0x4F
#define JRK_SETTING_MOTOR_BRAKE_DURATION_FORWARD 0x50
#define JRK_SETTING_MOTOR_BRAKE_DURATION_REVERSE 0x51
#define JRK_SETTING_MOTOR_COAST_WHEN_OFF 0x52
#define JRK_SETTING_ERROR_ENABLE 0x53
#define JRK_SETTING_ERROR_LATCH 0x55
#define JRK_SETTING_VIN_CALIBRATION 0x57

#define JRK_SETTINGS_SIZE 0x59

#define JRK_VENDOR_ID 0x1FFB
// TODO: use a more real product name here when we decide it
#define JRK_PRODUCT_ID_2017 0x00B7

#define JRK_FIRMWARE_MODIFICATION_STRING_INDEX 6

#define JRK_MAX_USB_RESPONSE_SIZE 128

#define JRK_MAX_ALLOWED_DUTY_CYCLE 600

#define JRK_INPUT_MODE_SERIAL 0
#define JRK_INPUT_MODE_ANALOG 1
#define JRK_INPUT_MODE_PULSE_WIDTH 2

#define JRK_FEEDBACK_MODE_NONE 0
#define JRK_FEEDBACK_MODE_ANALOG 1
#define JRK_FEEDBACK_MODE_FREQUENCY 2

#define JRK_SERIAL_MODE_USB_DUAL_PORT 0
#define JRK_SERIAL_MODE_USB_CHAINED 1
#define JRK_SERIAL_MODE_UART 2

#define JRK_MOTOR_PWM_FREQUENCY_20 0
#define JRK_MOTOR_PWM_FREQUENCY_5 1

#define JRK_SCALING_DEGREE_LINEAR 0
#define JRK_SCALING_DEGREE_QUADRATIC 1
#define JRK_SCALING_DEGREE_CUBIC 2
#define JRK_SCALING_DEGREE_QUARTIC 3
#define JRK_SCALING_DEGREE_QUINTIC 4

#define JRK_BAUD_RATE_GENERATOR_FACTOR 12000000

#define JRK_MIN_ALLOWED_BAUD_RATE 184
#define JRK_MAX_ALLOWED_BAUD_RATE 115385

#define JRK_RESET_POWER_UP 0
#define JRK_RESET_BROWNOUT 1
#define JRK_RESET_RESET_LINE 2
#define JRK_RESET_WATCHDOG 4
#define JRK_RESET_SOFTWARE 8
#define JRK_RESET_STACK_OVERFLOW 16
#define JRK_RESET_STACK_UNDERFLOW 32

#define JRK_ERROR_AWAITING_COMMAND 0
#define JRK_ERROR_NO_POWER 1
#define JRK_ERROR_MOTOR_DRIVER 2
#define JRK_ERROR_INPUT_INVALID 3
#define JRK_ERROR_INPUT_DISCONNECT 4
#define JRK_ERROR_FEEDBACK_DISCONNECT 5
#define JRK_ERROR_MAXIMUM_CURRENT_EXCEEDED 6
#define JRK_ERROR_SERIAL_SIGNAL 7
#define JRK_ERROR_SERIAL_OVERRUN 8
#define JRK_ERROR_SERIAL_BUFFER_FULL 9
#define JRK_ERROR_SERIAL_CRC 10
#define JRK_ERROR_SERIAL_PROTOCOL 11
#define JRK_ERROR_SERIAL_TIMEOUT 12

#endif
