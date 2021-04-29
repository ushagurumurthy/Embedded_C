/**
 * @file SeatHeatingApp.c
 * @author Usha B G ()
 * @brief Activities
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity_1.h"
#include "Activity_2.h"
#include "Activity_3.h"
#include "Activity_4.h"
#define ON 1
/**
 * @brief Main function
 * 
 * @return Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	uint16_t Temperature, ADCchannel=0;
	char TempType;
	USARTInit(); /* Initialize Peripherals for UART */
	while(1){
		uint8_t Status;
		/* Turns LED ON if and only if both switches ButtonSensor and Heater are closed */
		Status=StatusOfLedActuator();
		if(Status==ON){
			Temperature=ReadADC(ADCchannel); /*reads sensor data from ADCChannel*/
    	                TempType=GeneratePWM(Temperature);/*Generates PWM according to data received from sensor*/
			USARTWriteString(TempType);/*Sends data to serial monitor*/
		}
	}
	return 0;
}
