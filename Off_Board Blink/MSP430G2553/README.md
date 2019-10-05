# Off Board Blink

## MSP430G2553

For this part of the project, only the G2 could be set up for an off board blink. The same code from the regular LED was used, but the circuitry was 
moved to a breadboard. The G2 microprocessor can be removed, which is why the off board blink can work through the board. The microprocessor
was positioned on the breadboard and an LED was connected to pin P2.2. A small resistor of 500 ohms was connected from the LED to ground on the board.
Finally, the reset circuit was recreated on the breadboard using a 0.1 microfarad capacitor connecting to the ground pin and the reset pin of the 
microprocessor. A resistor was connected to this same reset pin and wired to power on the physical board. The LED blinked at a delay cycle of 20000.
