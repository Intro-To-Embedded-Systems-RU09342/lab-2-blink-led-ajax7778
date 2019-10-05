# Button Blink

## MSP430FR6989
For this board, both buttons were connected to their respective LED. P1.1 was connected to LED1, which is the red LED, and P1.2 was 
connected to LED2, which is the green LED. Both of them were toggled to the buttons. When S1 (P1.1) is pressed, P1.0 (the red LED) lights up.
When S2 (P1.2) is pressed, P9.7 (the green LED) lights up. 

## MSP430FRG2553
For this board, the P1.3 switch on the side of the board is used to light up the P1.0 LED at the bottom of the board. When the button is 
pressed, it gets grounded, lighting up the LED. First, the LED is set as an output direction and the switch is set as an output. The 
resistor at port 1 is enabled. A while loop was written to toggle P1.3 to the LED.
