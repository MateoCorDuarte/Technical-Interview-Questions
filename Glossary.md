# Concepts you might want to remember. 
*RISC:* Reduced Instruction Set Computer. It is a type of processor architecture that prioritizes speed and simplicity by using a small and optimized set of instructions. 

*CISC:* Complex Instruction Set Computer. This other processor architecture aims to perform more complex operations with fewer instructions.


## Embedded system:
It is a specialized computing system (system set for calculations and data manipulations(storage and reading)) with chip-enabled hardware (integrated circuits hardware (does this mean that it must be based on ICs?)). 

*Demands on Embedded system:*
+ It must respond quickly to sequences and combinations of events.
+ must perform multiple separate activities simultaneously.
+ Must handle faults without crashing. (This means handling more than possible outcomes of the software; it also handles possible flaws from hardware or software.)

*Ubiquitous computing:* Is a paradigm, though so every device (thing) can communicate with each other.

Application of embedded systems: IoT.
The Idea is to communicate everything with everything. There are several layers of application, such as industrial, consumable, and wearable. Each level has its limitations, which leave a space for innovation at every level. 
Challenges are: 
+ Cost.
+ Chip size.
+ Device constraints
+ IP numbers.
+ Server capacity.
+ Network reliability. 

*Virtual memory* is a memory management technique used by the OS that allows the computer to compensate for the shortage of RAM by temporarily transferring data from RAM to storage.

*Concurrency:* Switching tasks to resemble multitasking.

*ALU:* In the context of embedded systems, an ALU (Arithmetic Logic Unit) is a fundamental digital circuit that performs all the arithmetic and logical operations within the processor.

*MCU:* Microcontroller unit, which contains a microprocessor, digital I/O, analog I/O, timers, data memory (variables, addresses, etc.), program memory (executable instructions), and other peripherals.

*CPU: (microprocessor)* Central processing unit. It's a multipurpose, clock-driven, programmable electronic device, designed to perform arithmetical and logic operations using an ALU. It's the central core of an embedded system. 

*SoC:*.

*DAP:* Debug Access port. It is a port that provides an interface for external debuggers to access and control the internal state of the embedded system. This debugger allows you to load code, set breakpoints, step through code, or inspect memory and registers.

*TLS:* Transport Layer Security. It is a cryptographic protocol designed to provide secure communication over a computer network. It's the successor to SSL (Secure Sockets Layer). It is vital when connecting to other devices to ensure and secure data transmission. 

*CMSIS: * (Common Microcontroller Software Interface Standard). It is the set of hardware abstraction layers and software components defined by ARM to standardize software interfaces to the processor and its peripherals. 
## GPIO
*Current sinking*: The pin receives current from a load. Example: from load -> to pin -> to GND.

*Current Sourcing*: The pin supplies current to a load. Example: from pin -> to load -> to GND.

## Interupts
Interrupts are a hardware-triggered asynchronous routine, which means external hardware can start a local software.
*Polling:* is the task of constantly checking something. (It's inefficient and slow as it blocks the threat from doing something else, even when nothing happens). 

*Hardwired CPU:* It is the state the code gets, where it stores the previous task before switching to an interrupt routine.
