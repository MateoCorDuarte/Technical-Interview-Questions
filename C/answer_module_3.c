#include "mbed.h"

// Define the Input pins 
DigitalIn  START(p5); //Start control, start = 1 
DigitalIn  GUARD(p6); //Machine guard sensor; guard closed = 1 
DigitalIn  TEMP(p7);//Temperature sensor; excess temp = 1 
DigitalIn  STOP(p8); //Stop control, stop = 1 

//Define the Output pins 
DigitalOut READY(p9);//Motor is ready to run, i.e. guard closed, temp OK. 
DigitalOut RUNNING(p10); //Motor is running 
DigitalOut FAULT(p11); //Guard is openend while motor running 
DigitalOut EXCES(p12); //Excess temp 

BusOut leds(READY,RUNNING, FAULT,EXCES);

int main()
{
    while(1) {
        ControlLED_DigitalIO ();
        // ControlLED_BusIO ();
        wait(0.25);
    }
}
