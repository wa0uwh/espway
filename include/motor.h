#pragma once

#define MOTOR_PWM_PERIOD 1000

#define MOTOR1_PWM_MUX PERIPHS_IO_MUX_MTMS_U
#define MOTOR1_PWM_FUNC FUNC_GPIO14
#define MOTOR1_PWM_GPIO_NUM 14
#define MOTOR1_DIR_MUX PERIPHS_IO_MUX_MTDI_U
#define MOTOR1_DIR_FUNC FUNC_GPIO12
#define MOTOR1_DIR_GPIO_NUM 12

#define MOTOR2_PWM_MUX PERIPHS_IO_MUX_MTCK_U
#define MOTOR2_PWM_FUNC FUNC_GPIO13
#define MOTOR2_PWM_GPIO_NUM 13
#define MOTOR2_DIR_MUX PERIPHS_IO_MUX_MTDO_U
#define MOTOR2_DIR_FUNC FUNC_GPIO15
#define MOTOR2_DIR_GPIO_NUM 15

#define MOTOR1_REVERSE false
#define MOTOR2_REVERSE false

#include "q16.h"

void setup_motor_pwm();
void set_motor_velocities(q16 velocity1, q16 velocity2);

