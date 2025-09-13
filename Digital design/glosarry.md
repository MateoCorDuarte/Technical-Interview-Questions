Carry: when two binary bits sum 1 (1+1), then that position turns into 0, but the count is stored in the carry bit.

half adder: 
The circuit of a Half adder is shown in the next image. This half adder allows only to sum two bits.
<img width="685" height="440" alt="image" src="https://github.com/user-attachments/assets/3c3b5c98-5440-4130-b680-1c19ba7d1903" />

Full adder: Allows the sum of two bits along with a previous operation. 

<img width="652" height="470" alt="image" src="https://github.com/user-attachments/assets/b637c681-0415-43fa-aa4d-2c4403eada43" />

*Adders Architecture*

Ripple Carry: Uses full adders in series, is easy to apply, but the critical path is larger. 

Carry look-ahead: Basically uses the Full adders in parallel, modifying the initial circuit so its more optimized depending on the number of bits added.

Carry Save Adder: This one stores the result of the carries and the sums to then sum them and get the result, avoiding the unnecessary carry propagation.



*Filters*
FIR (Finite Impulse Response): What makes a filter an FIR filter is being Finite and having no feedback.
<img width="450" height="261" alt="image" src="https://github.com/user-attachments/assets/fe56c840-bdf5-4e5e-addd-d5b3a0d4762c" />

IRR (Infinite impulse response): On the other side IRR is basically the oposite, it is infinite and holds feedback. 
<img width="453" height="328" alt="image" src="https://github.com/user-attachments/assets/53f5b549-7609-4f39-88e5-0894c20fb186" />

