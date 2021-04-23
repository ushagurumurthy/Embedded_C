#include "Header.h"
int main()
{

    DDRB|=(1<<PB0); //Makes first pin of PORTB as Output
    DDRD&=~(1<<PD0);
    DDRD&=~(2<<PD0);
    PORTD|=(1<<PD0);
    PORTD|=(2<<PD0);


    while(1)
    {
        /*checks whether button sensor is ON or OFF */
       /*checks whether heater button is ON or OFF */
        if(!(PIND&(1<<PD0)) && !(PIND&(2<<PD0))) 
            {

                PORTB|=(1<<PB0); //Turns LED ON
            }
            else
                {
                    PORTB&=~(1<<PB0); //Turns LED OFF
                }

    }
return 0;
}
