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

#define RED_LED p5
#define SPEAKER p21
#define AIN1 p15
#define AIN2 p16

// Define the PWM speaker output
PwmOut speaker(SPEAKER);

// Define analog inputs
AnalogIn level(AIN1); //tank level
AnalogIn temp(AIN2); //temperature level
//Write your code here

DigitalOut low_level(RED_LED);

//Define variables
float loval, hival, i;

/* full && Temperature too high. temperature > 2/3 range.
+  full && good temperature. 2/3 >= temperature >= 1/3.
+  full && low temperature. 1/3 >= temperature.
+  empty/low && any temperature. 3/4 >= water level. 
 *----------------------------------------------------------------------------*/
int main(){
 low_level=1;
    while(1){
        while(level.read()<0.75){
            low_level=!low_level;
            //Emit one cycle of warble
            for(i=0; i<1; i+=0.05){   //20 steps 
                speaker.period(0.010-(0.008*i)); //sweep starts f=100, ends f=500  
                wait_ms (50); 
            } 
        }
     low_level=0;
        //first sub loop, check the level of the water.
        if(temp.read()<0.33){// temp to low
            hival = 0.005; //set 200 Hz as tone 
            loval = 1;//no output wanted for 2nd tone, so set to (inaudible)1 Hz
        } 
        else if(temp.read()>0.66){//temp too high
            hival = 0.001; //set 1000 Hz as upper tone
            loval = 0.005; //set 200 Hz as lower tone 
        }
        else if((temp.read()<0.66)&&(temp.read()>0.33)){
             hival = 0.002; //set 500 Hz as upper tone 
             loval = 0.002; //set 500 Hz as lower tone  
        }
        
            // Create a saw-tooth sound wave
            // Make the period and volume adjustable using the potentiometers
            wait_ms(100);
    }
}
