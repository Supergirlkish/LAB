#include "SysTick.h"

//must be accurate.. for systick

int SetPeriod = 0x0000FFFF;
int TimeDiff;

//Taken from peripheral driver library
void SysTick_Setup()
	
{
	SysTickPeriodSet(SetPeriod); //Set the period to ?? ticks
	SysTickEnable();
}

//Enable NVIC for something? 
void InterruptEnable()
{
	SysTickIntEnable(); //enable SysTick Interrupt
	//write some code to setup an interrupt for SysTick Timer
	//where to put this code? 
	//IntEnable(INT_GPIOF_TM4C123); //enables interrupt for PORTF
}

//Create a function that accepts 2 pointers to a timer struct and measures the time difference between the events.
int SysTickDifference(struct SysTickTimers * myTimer)
{
	
	int CounterVal = SysTickValueGet();
	TimeDiff = (SetPeriod-CounterVal)*(12.5);
	Mytimer.uSTimer = TimeDiff/(10^3);	//not sure this is right
	Mytimer.mSTimer = TimeDiff/(10^6);
	
}

