/*
You are developing the monitoring (but not control) system for a heating tank in an industrial process. There are two sensors in the tank, one for temperature and the other for level. Four output states must be detected, each triggering a different audible status tone: 

Tank is full, temperature too high (upper third of temperature range) : two-tone  
Tank is full, temperature is good (middle third of temperature range): steady continuous tone 
Tank is full, temperature too low (lower third of temperature range): single beeping tone 
Tank level is too low (tank less than three quarters full), any temperature: frequency-modulated “warble”  tone, flashing LED 
Sensors must be tested at least once every two seconds. 

Write a program to meet this requirement, testing and demonstrating it on the Mbed simulator. Use potentiometers for tank level and temperature, and the Pwm speaker to generate the audible status signals.

-------------------------------------------------------------------------------------------------------------------------------
First, check the temperature. If it's too low, turn on the  flashing LED.  

if not, then check the temperature
if the temperature is too high. -> two tone

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

/* full && Temperature too high. temperature > 2/3 range.
+  full && good temperature. 2/3 >= temperature >= 1/3.
+  full && low temperature. 1/3 >= temperature.
+  empty/low && any temperature. 3/4 >= water level. 
*/
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
