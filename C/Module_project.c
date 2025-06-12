/*Program done to study embedded systems, 
This code aims to simulate a motor with a secure guard, temperature sensor, 
start and stop buttons, along with LEDs. 

The following inputs and outputs are needed, with proposed logic values. 

Push button 1: User start button; closure = logic 1.
Push button 2: Stop; closure = logic 1.
Switch 1: Machine guard sensor; closed condition = logic 1.
Switch 2: Temperature sensor; excess temperature = logic 1.
LEDs are used to indicate machine status: 

LED 1: Motor is ready to run, i.e. guard is closed, temperature is OK. This LED should flash when machine in “not ready” state. 
LED 2: Motor is running. 
LED 3: Fault condition – guard opened while running, shows for 0.5 s. 
LED 4: Fault condition – excess temperature, shows for 0.5 s.
*/
#include "mbed.h"

#define BUTTON_1 p5
#define BUTTON_2 p6 
#define SWITCH_1 p7 
#define SWITCH_2 p8 

#define RED_LED p9
#define BLUE_LED p10
#define YELLOW_LED p11
#define WHITE_LED p12

//Define interrupt inputs
DigitalIn  start(BUTTON_1);
DigitalIn  stop(BUTTON_2);
DigitalIn  guard(SWITCH_1);
DigitalIn  temperature(SWITCH_2);

//Define outputs
DigitalOut not_ready(RED_LED);
DigitalOut running(BLUE_LED);
DigitalOut guard_open(YELLOW_LED);
DigitalOut excess_temperature(WHITE_LED);

BusOUT leds(RED_LED,BLUE_LED,YELLOW_LED,WHITE_LED);


//Define ISRs for the interrupts

void button_1_handler(){
	
	//Write your code here
	
}

void button_2_handler(){
	
	//Write your code here
	
}

void switch_1_handler(){
	
	//Write your code here
	
}

void switch_2_handler(){
	
	//Write your code here
	
}

/*----------------------------------------------------------------------------
 MAIN function
 *----------------------------------------------------------------------------*/

int main(){
		
	//Initially, turn off all LEDs
	leds = 0x0;
	
	//Write your code here
	if()
	//Interrupt handlers
	//Attach the address of the ISR to the rising edge
	
	//Write your code here
	
	//wait 100 ms
	while(1)
		wait_ms(100);
}

