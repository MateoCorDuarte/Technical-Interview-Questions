/*
A waiting area in a barbershop has very limited space. There are three barbers, 
and two categories of customer: child and adult. 
Barbers 1 and 2 cut only the hair of adults, while barber 3 cuts only children’s hair. 
There are 8 waiting spaces. Customers must come alone, except that children must come with one parent; 
no one is allowed entry if there is no waiting space. One haircut takes 12 minutes, with 1 minute gap before the next customer. 
Once their hair is cut, customers leave the shop without re-entering the waiting area; 
children’s parents however remain in the waiting area until their child’s haircut is complete. The wall on the clock ticks every minute. 
In the case of a fire alarm, all customers must leave the shop in an orderly fashion. 
*/
#include "mbed.h"

#define BUTTON_1 p5 //ADULT
#define BUTTON_2 p6 //child
#define BUTTON_3 p7 //fire alarm

#define RED_LED p8 //No entry light
#define BLUE_LED p9 //barber 1 seat
#define YELLOW_LED p10 //barber2 seat
#define WHITE_LED p11 //barber 3 seat
#define WHITE_LED p12 //wall clock
//Waiting seats

//Define interrupt inputs
DigitalIn  adult(BUTTON_1);
DigitalIn  child(BUTTON_2);
DigitalIn  fire_alarm(BUTTON_3);
DigitalIn  temperature(SWITCH_2);

//Define outputs
DigitalOut no_entry(RED_LED);
DigitalOut barber_1(BLUE_LED);
DigitalOut barber_2(YELLOW_LED);
DigitalOut barber_3(WHITE_LED);


