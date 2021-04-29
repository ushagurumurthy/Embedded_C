#ifndef _ACTIVITY_3_H_
#define _ACTIVITY_3_H_

/**
 * @file Activity_3.h
 * @author Usha B G ()
 * @brief Activity_3
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * @brief Function to initialize PWM    
 * 
 */
void InitializePWM(void);
/**
 * @brief Function to Generate PWM    
 * 
 * @param[in] Temperature input temperature obtained from ADC 
 */
void GeneratePWM(uint16_t);
#endif  /* _ACTIVITY3_H_ */
