#ifndef _ACTIVITY2_H_
#define _ACTIVITY2_H_

/**
 * @file Activity_2.h
 * @author Usha B G ()
 * @brief Activity_2
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * @brief Function to initialize ADC
 * 
 */
void InitializeADC();

/**
 * @brief Function to read values from a channel 
 * @param[in] channel number
 */
uint16_t ReadADC(uint8_t channel);

#endif /* _ACTIVITY2_H_ */
