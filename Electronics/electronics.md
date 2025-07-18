*Pull up:* When the input is default high, it turns low when pressed. 

*Pull down:* When the input is default low, it turns high when pressed. 

*Input mode*: The configuration of the type of input data you can receive, either pull up/pull down, analog, etc. 

*Toggle:* To switch states from on to off and vice versa. 

*Timers:* At their heart, timers are just counters. They are driven by a clock source, which provides a series of regular pulses (like the ticks of a clock). Each time the timer receives a pulse, its internal counter register increments by one.
  
  + *Clock source:* The input signal that drives the timer. It can be: Internal System Clock running in the CPU, External oscillator with a crystal or ceramic resonator (very stable frequency), or PLL(Phase-Locked Loop), which is a multiple of the system clock. 
  + *Prescaler:* a value that divides the value of the clock frequency to count slower or faster. 
  + *Time Counter register:* register that holds the current count value after the frequency was divided by *Prescaler*.
