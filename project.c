//Matthew Matti & Lakeysha Green 
#include "project.h"

//*****************************************************************************
//
// Working on the ADC today 9/27/17
//
//*****************************************************************************

#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
}
#endif

//void (print_donkey)
	
//void SetupHardware()
//{
//       UartSetup();
//}

int  main(void)
{
	SysCtlClockSet(SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | SYSCTL_SYSDIV_5);
  
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
    SysCtlPeripheralReset(SYSCTL_PERIPH_ADC0);
    volatile uint32_t ui32Loop;
	  uint8_t temp;
	
    // Enable the GPIO port that is used for the on-board LED.
		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    //SetupHardware();
	
		// Check if the peripheral access is enabled.
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    
		}
    
		// Enable the GPIO pin for the LED (PF3).  Set the direction as output, and
    // enable the GPIO pin for digital function.
		GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);
		GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3);
    while(1)
		{
// UART
//			{
//		  UARTCharPut(UART0_BASE, temp);
//			printf("Type in a character \n");
//			
//			//printf("This is your character \n"); 
//			 printf("Print a variable %c\n\r", temp);
//			//printf("select an option \n");
//			//printf("1: This is the first thing \n");
//			//printf("2: This is the second thing \n");
//			//printf("3: This is the third thing \n");
//	 
//	temp = getc(stdin);
//	 }
			//switch(temp)
			//{
				//case '1': print_chicken;
				//break;
				//case '2': print_something;
				//break;
				//case '3': print_somethingelse;
				//break; 
				
				
		//	}

//GPIO
		
{
	 UpdateMYButtons();
	
	if(Mybuttons.SW1==0)
				{
				}
				else
				{				
		
			TurnOnLEDs();
	
	}
	if(Mybuttons.SW2==0)
				{
				}
				else
				{	

				TurnOnLEDs2
		
}