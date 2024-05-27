#include "mbed.h"
#include "servo.h"
servo::servo(PinName _sig):PwmOut(_sig){
    period_ms(20);
};

void turn(int ang){
    pulse=(500.0+((float)ang*50.0/9.0))/1000000;//500us~2500us
    pulsewidth(pulse);
};
