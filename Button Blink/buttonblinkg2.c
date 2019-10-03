#include <msp430g2553.h>

void main(void)
{
    WDTCTL = WDTPW + WDTHOLD;  //stop watchdog timer
    P1DIR = BIT0;              //set P1.0 as output direction
    P1REN = BIT3;             //port 1 resistor enable
    P1OUT = BIT3;             //makes P1.3 an output
    while(1)
    {
        if((P1IN & BIT3)!=BIT3)   //P1In is 0 on button press
        {
            __delay_cycles(220000);
            P1OUT ^= BIT0;
        }
    }
}
