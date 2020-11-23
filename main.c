/**********************************************************/
/* Author    : Toka Medhat                                */
/* Date      : 19 Nov 2020                                */
/* Version   : V01                                        */
/**********************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"


void FlowerFunc(void);
void LedToLed(void);
void LedsOnOff(void);

void main(void)
{
	RCC_voidInitSysClock();

	RCC_voidEnableClock(RCC_APB2,2);

	GPIO_voidSetPinDirection(GPIOA,0,0b0010);
	GPIO_voidSetPinDirection(GPIOA,1,0b0010);
	GPIO_voidSetPinDirection(GPIOA,2,0b0010);
	GPIO_voidSetPinDirection(GPIOA,3,0b0010);
	GPIO_voidSetPinDirection(GPIOA,4,0b0010);
	GPIO_voidSetPinDirection(GPIOA,5,0b0010);
	GPIO_voidSetPinDirection(GPIOA,6,0b0010);
	GPIO_voidSetPinDirection(GPIOA,7,0b0010);


	while(1)
	{

		FlowerFunc();
		LedToLed();
		LedsOnOff();

	}
}


