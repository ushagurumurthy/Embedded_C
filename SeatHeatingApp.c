/**
 * @file SeatHeatingApp.c
 * @author UshaBG
 * @brief Activities
 * @version 0.1
 * @date 2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity_1.h"
#include "Activity_2.h"

/**
 * @brief Main function
 * 
 * @return Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	InitializePeripherals();/* Initialize Peripherals */
	/* Turns LED ON if and only if both switches ButtonSensor and Heater are closed */
	StatusOfLedActuator();
	return 0;
}
