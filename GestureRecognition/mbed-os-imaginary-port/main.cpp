#include "mbed.h"

DigitalOut led1(LED1);

int main()
{
    while (true) {
        led1 = !led1;
        ThisThread::sleep_for(500ms);
    }
}