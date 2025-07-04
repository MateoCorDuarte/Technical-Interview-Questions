/*
The main Idea behind this example is to test the analog inputs, to do so, we will use a PMW
to emit the signal of a speaker, that modify it's pitch and volume with two potentiometers.
*/
#include "mbed.h"

#define SPEAKER p21
#define AIN1 p15
#define AIN2 p16

// Define the PWM speaker output
// Define analog inputs

//Write your code here

//Define variables
float i;
/*----------------------------------------------------------------------------
 MAIN function
 *----------------------------------------------------------------------------*/
int main(){
    while(1){
        // Create a saw-tooth sound wave
        // Make the period and volume adjustable using the potentiometers
        wait_ms(100);
    }
}
