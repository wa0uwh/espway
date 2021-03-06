#include <Arduino.h>

#include "motor.h"
#include "newpwm.h"

void setMotorSpeed(int channel, int dirPin, q16 speed, bool reverse) {
    speed = constrain(Q16_TO_INT(PWMPERIOD * speed), -PWMPERIOD, PWMPERIOD);

    if (reverse) {
        speed = -speed;
    }

    if (speed < 0) {
        digitalWrite(dirPin, HIGH);
        pwm_set_duty(PWMPERIOD + speed, channel);
    } else {
        digitalWrite(dirPin, LOW);
        pwm_set_duty(speed, channel);
    }
}

