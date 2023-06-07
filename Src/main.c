#include <stdint.h>
#include "stm32g431xx.h"
#include "../Inc/RegistersConfig/RegistersConfig.h"

int main(void)
{
	ClockFrequency_Setup();
	Systick_Setup();
	GPIOA_Setup();

	uint64_t tmpMs;
	while(1)
	{

	}
}
