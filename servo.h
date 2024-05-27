#ifndef INCLUDED_servo_H
#define INCLUDED_servo_H
#include "mbed.h"

class servo:PwmOut{
    public:
    servo(PinName _sig);
    void turn(int ang);

    private:
    float pulse;
};
#endif
