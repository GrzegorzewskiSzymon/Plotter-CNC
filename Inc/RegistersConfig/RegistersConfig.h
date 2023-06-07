/*
 * RegistersConfig.h
 *
 *  Created on: 7 Jun 2023
 *      Author: Szymon Grzegorzewski
 */

#ifndef REGISTERSCONFIG_REGISTERSCONFIG_H_
#define REGISTERSCONFIG_REGISTERSCONFIG_H_


//Simple LED
#define PA5_HIGH GPIOA->BSRR |= GPIO_BSRR_BS5;
#define PA5_LOW  GPIOA->BSRR |= GPIO_BSRR_BR5;


//
// Functions
//

void ClockFrequency_Setup();
void Systick_Setup();
void GPIOA_Setup();

//
// Variables
//

extern uint64_t ms;//reference time counted from the "beginning"


#endif /* REGISTERSCONFIG_REGISTERSCONFIG_H_ */
