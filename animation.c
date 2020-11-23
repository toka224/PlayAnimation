/**********************************************************/
/* Author    : Toka Medhat                                */
/* Date      : 19 Nov 2020                                */
/* Version   : V01                                        */
/**********************************************************/

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "GPIO_interface.h"
#include "STK_interface.h"

#define LED_NUM     8
u8 count;

void FlowerFunc(void)
{
	u8 j;
	count=0;
	while (count!=3)
	{
		j=0;
		for(u8 i=0 ; i<LED_NUM/2 ; i++)
		{
			GPIO_voidSetPinValue(GPIOA,i,1);
			GPIO_voidSetPinValue(GPIOA,i+7-j,1);

			MSTK_voidSetBusyWait(500000);

			GPIO_voidSetPinValue(GPIOA,i,0);
			GPIO_voidSetPinValue(GPIOA,i+7-j,0);
			j+=2;
		}

		j=6;
		for(s8 i=(LED_NUM/2)-1 ; i>=0 ; i--)
		{

			GPIO_voidSetPinValue(GPIOA,i,1);
			GPIO_voidSetPinValue(GPIOA,i+7-j,1);

			MSTK_voidSetBusyWait(500000);

			GPIO_voidSetPinValue(GPIOA,i,0);
			GPIO_voidSetPinValue(GPIOA,i+7-j,0);
			j-=2;
		}
		count++;
	}
	MSTK_voidSetBusyWait(500000);
}
void LedToLed(void)
{

	count=0;
	while (count!=3)
	{
		for(u8 i=0 ; i<LED_NUM ; i++)
		{
			GPIO_voidSetPinValue(GPIOA,i,1);

			MSTK_voidSetBusyWait(500000);

			GPIO_voidSetPinValue(GPIOA,i,0);

		}
		for(s8 i=LED_NUM-1 ; i>=0 ; i--)
		{
			GPIO_voidSetPinValue(GPIOA,i,1);

			MSTK_voidSetBusyWait(500000);

			GPIO_voidSetPinValue(GPIOA,i,0);

		}
		MSTK_voidSetBusyWait(500000);
		count++;
	}

}
void LedsOnOff(void)
{
	count=0;
	while (count!=3)
	{
		for(u8 i=0 ; i<LED_NUM ; i++)
		{
			GPIO_voidSetPinValue(GPIOA,i,1);

		}
		MSTK_voidSetBusyWait(500000);

		for(u8 i=0 ; i<LED_NUM ; i++)
		{

			GPIO_voidSetPinValue(GPIOA,i,0);

		}

		MSTK_voidSetBusyWait(500000);
		count++;
	}
}


