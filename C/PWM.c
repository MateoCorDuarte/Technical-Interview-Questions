/*
The main Idea behind this example is to test the analog inputs, to do so, we will use a PMW
to emit the signal of a speaker, that modify it's pitch and volume with two potentiometers.
*/
#include "mbed.h"

#define SPEAKER p21
#define AIN1 p15
#define AIN2 p16

// Define the PWM speaker output
PwmOut speaker(SPEAKER);

// Define analog inputs
AnalogIn port1(AIN1);
AnalogIn port2(AIN2);

//Write your code here

//Define variables
float val1;
float val2;
float i;
/*----------------------------------------------------------------------------
 MAIN function
 *----------------------------------------------------------------------------*/
int main(){
    while(1){
        val1 = port1.read();
        val2 = port2.read();
        // Create a saw-tooth sound wave
        // Make the period and volume adjustable using the potentiometers
        for(i=0;i<1;i+=0.05){
            speaker.period(0.003125-(0.002*val1));
            speaker = i*0.05*val2;
        }
        wait_ms(100);
    }
}
