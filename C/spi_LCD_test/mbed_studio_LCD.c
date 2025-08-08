/* Trial SPI Master: Sends two words in turn to external Shift Register. 
   */

#include "mbed.h"
DigitalOut CS(D10);

SPI ser_port(D11, D12, D13); // mosi, miso, sclk
char switch_word;            //word we will send

int main() {
  ser_port.format(8,0);        // Set up the SPI for 8 bit data, 
                                    //Mode 0 operation
  ser_port.frequency(1000000); // Clock frequency is 1MHz
  CS=1;				   //Chip Select idles high
  while (1){
    switch_word=0xAA;            //set up word to be transmitted
    CS=0;			     //Select Slave device 
    ser_port.write(switch_word); //send switch_word
    CS=1;
    thread_sleep_for (500);
    switch_word=0x55;            //set up word to be transmitted
    CS=0;
    ser_port.write(switch_word); //send switch_word
    CS=1;
    thread_sleep_for (500);
    }    
}
