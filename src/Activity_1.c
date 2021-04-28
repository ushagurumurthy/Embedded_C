#include "Activity_1.h"
#include "Activity_2.h"
#include "Activity_3.h"
#include "Activity_3.h"

void DelayMilliSecond(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}

void ChangeLEDState(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}

void SetButtonSensorPin(void)
{
	BUTTON_SENSOR_PORT |= (1 << BUTTON_SENSOR_PIN);
}

void SetHeaterSensorPin(void)
{
	HEATER_SENSOR_PORT |= (1 << HEATER_SENSOR_PIN);
}

void InitializePeripherals(void)
{
	/* Configure LED Pin */
	SET_PORTB0;//Makes first pin of PORTB as Output
    SET_PORTD; //Makes all pins of PORTD input
	SET_PD0_AND_PD1; //Pull Up 
    SetButtonSensorPin();
    SetHeaterSensorPin();
}

void StatusOfLedActuator(void)
{   
    uint16_t Temperature=0, ADCchannel=0;
    InitializeADC();
    InitializePWM();
    ChangeLEDState(LED_OFF);
    while(1){
        /*checks whether button sensor is ON or OFF */
        if(BUTTON_SENSOR_ON){
            /*checks whether heater button is ON or OFF */
            if(HEATER_SENSOR_ON){
                ChangeLEDState(LED_ON);
                Temperature = ReadADC(ADCchannel);
                OCR1A = Temperature;
                DelayMilliSecond(200);
            }
            else ChangeLEDState(LED_OFF);
        }
        else ChangeLEDState(LED_OFF);
    }
}
