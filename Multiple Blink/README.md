# Multiple Blink
Now that we have blinked at least 1 LED, what about blinking multiple LEDS at the same time? The minimum that you need to develop is 
blinking at least two LEDs at two different rates. Although I am not going to give you a speed, you should probably pick a rate which 
is visible to a standard human. I really hope that you take this further and perform some of the extra work for this part of the lab exercise.


## MSP430G2553
For this portion of the lab, the only thing that needed to happen was to add the second LED in to the initial simple blink code and 
change the delay. The LED on the G2 that was used in the Simple Blink is P1.0. The second LED used for this portion of the project is 
located at P1.6. All that needed to be done to blink both LEDs was to set P1.6 to an output direction using the same method as the 
original code, and toggle it, also using the same method. The delay for this board was set to 50000.

## MSP430FR6989
For this board, the code for blinking 1 LED was modified slightly to accommodate for a second LED. The original code attained from the 
TI Resource explorer gave P1.0 as the LED that was turned on. The LED right next to it is labeled as P9.7. Using the same tactic as 
shown in the original code, P9.7 was cleared and set to output direction. It was then toggled and both of the LEDs were delayed. 
