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
/*I was trying to do one function so I didn't need to do all the process of 
checking on the availabilities.
*/
#define RED_LED p8 //No entry light
#define BLUE_LED p9 //barber 1 seat
#define YELLOW_LED p10 //barber2 seat
#define WHITE_LED p11 //barber 3 seat
//#define WHITE_LED p12 //wall clock
//Waiting seats

//Define interrupt inputs
InterruptIn  adult(p5);
InterruptIn  child(p6);
InterruptIn  fire_alarm(p7);

//Define outputs
DigitalOut no_entry(RED_LED);
DigitalOut barber_1(BLUE_LED);
DigitalOut barber_2(YELLOW_LED);
DigitalOut barber_3(WHITE_LED);
DigitalOut wall_clk(p12);
BusOut seating (p13,p14,p15,p16,p17,p18,p19,p20);//waiting area chairs

//Define counters
int time1,time2,time3; //timer of each barber
int seats_pat,child_no,adult_no; //number of total people, kid, adult

void adult_handler(){
	if(seats_pat<=7){
		adult_no++;
		seats_pat++;
	}
	if(seats_pat==8)no_entry=1;
}

void child_handler(){
	if(seats_pat<=7){
		seats_pat=2+seats_pat;
		adult_no++;
		child_no++;
	}
	if(seats_pat>=8)no_entry=1;
	
}

void fire_alarm_handler(){
	no_entry=1;//as the barber shop is no longer available.
	//We restart every input and output counters
	time1=time2=time3=0;
	seats_pat=child_no=adult_no=0;
	barber_1= barber_2= barber_3= wall_clk=0;
}

void checking_barber_1_2(DigitalOut *barber,int *timer){
	if(barber==0){//Barber not available
			timer++;
			if(timer==12){
		//when the barber finishes cutting hair, restart the default values
				barber=1;
				timer=0;
			}
		}
		if(barber==1){//barber available
			if(0<adult_no){
				barber=0;
				adult_no--;
				timer++;
			}
		}
}
int main(){
		
	//Initially turn off all LEDs
  
	barber_1=0;
	barber_2=0;
	barber_3=0;
	no_entry=0;
	seats_pat=child_no=adult_no=0;
	//Interrupt handlers
	adult.rise(&adult_handler);
	child.rise(&child_handler);
	fire_alarm.rise(&fire_alarm_handler);
	//wait 100 ms
	while(1){
		checking_barber_1_2(&barber_1,&time1);
		checking_barber_1_2(&barber_2,&time2);
		if(barber1==0){//Barber not available
			time1--;
			if(time1==0){
		//when the barber finishes cutting hair, restart the default values
				barber1=1;
				time1=12;
			}
		}
		if(barber1==1){//barber available
			if(0<adult_no){
				baber1=0;
				adult_no--;
				timer1--;
			}
		}
		wait_ms(100);
	}
}

