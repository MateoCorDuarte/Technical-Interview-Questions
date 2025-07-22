*Serial communication*: Each bit is transferred one by one; the shift register acts as a sender and receiver. 
*Shift register:*  Is a type of digital circuit that can store and move data. At its core, it's a cascade of interconnected flip-flops, typically D-type flip-flops, arranged in a chain.

*Synchronous:*  The pulse in which the data is sent is agreed on by the sender and receiver.

*Asynchronous:* There is no shared clock signal between the sender and receiver. Instead, each device uses its internal clock, and synchronization is achieved through specific control bits.

*Serial Peripheral Interface(SPI):*

+ Chip Select(CS): Selects the device to whom its talking.
+ COTI/MOSI (Master Out, Slave In/Controller Out Target In): This is the data line from the master to the slave. Data bits transmitted by the master are sent out on this line and received by the slave.


+ CITO/MISO (Master In, Slave Out/Controller In, Target Out): This is the data line from the slave to the master. Data bits transmitted by the selected slave are sent out on this line and received by the master.
