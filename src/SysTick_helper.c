#include "SysTick_helper.h"

//must be accurate.. for systick

int SetPeriod = 0x0000FFFF;

//Taken from peripheral driver library
void SysTick_Setup()
	
{
	SysTickPeriodSet(SetPeriod); //Set the period to ?? ticks
	SysTickEnable();
}


void InterruptEnable() // do we need an interrupt?
{
	SysTickIntEnable(); //enable SysTick Interrupt
	//interrupt for systick
}
