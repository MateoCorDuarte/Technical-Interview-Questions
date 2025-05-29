# RTOS
*RTOS* (Real-time operating system) is an operating system designed to be small. It is used mainly in devices that need to react to external events within strict time constraints. This OS achieves multitasking by using scheduling, concurrency, etc. Unlike general-purpose (non-real-time) systems, the different objective is reflected in the scheduling policy.

*Task* = threat(in small RTOSes because they don't support virtual memory)


*Multitasking:* and inter-task communications features of the OS allow partitioning and setting a complex application into a set of small and more manageable tasks. 

*Scheduling:* is the part of the kernel responsible for deciding which tasks should be executing at any particular time.

*Scheduling policy:* is the algorithm used by the scheduler to decide which task to execute at any point in time.

Blocking and non-blocking wait: 
Blocking: An operation causes the threat or program to wait until the operation is complete before proceeding with any further tasks.
