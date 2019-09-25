# Simple Blink Prompt
For starters, you will need to blink one of the on-board LED's at a particular rate. It is up to you to determine what rate you want to blink it at, however it has to be symmetrical (50% Duty Cycle), meaning equal times on and off. You should attempt multiple different speeds before moving on to the next part of the lab.

## MSP430G2553
The code for blinking a singular LED for this board was found using the TI Resource explorer. It sets up the code so that the LED connected to P1.0 blinked. The delay was set using a do while loop and set to delay at 50000Hz. The code starts by stopping the watchdog timer, then setting the desired pin as an output. The pin is then set to be toggled using exclusive OR. For the delay, an integer i was set to a value of 50000 and a do while loop counts down until i reaches zero.

## MSP430FR6989
The simple blink was performed on this board similarly to the MSP430G2553, in that TI Resource explorer was used to generate an already working code. Once again, the watchdog timer was stopped. Then the LED pin (P1.0) was cleared and set to an output. The code then turns off the GPIO power-on default high-impedance mode. The delay for the LED blink is then set using a while loop. The initial delay is set to 100000Hz.
