void initialise_ports(void)
{
    DDRB|=(1<<PB0);                                         //PB0 as output port
    DDRD&=~(1<<PD0);                                        //PD0 as input port
    PORTD|=(1<<PD0);                                        //PD0 set as internal pull up
    DDRD&=~(1<<PD2);                                        //PD2 as input port
    PORTD|=(1<<PD2);                                        //PD2 set as internal pull up
}
