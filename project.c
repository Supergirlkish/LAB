#include "project.h"
#include <stdio.h>
#include <stdint.h>
//#include "uart_helper.c"
//#include "uart_helper.h"
//*****************************************************************************
//
// Working on the UART today 9/20/17
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
//   {
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
	
		
{
				
			// Turn the LED red
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_1, 0XF );
			 // Delay for a bit.
       for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
	     {
			 }
			 GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x0);
       // Delay for a bit.
       for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
       {
			 }				 
			
			//Turn the LED blue
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_2, 0XF );
			 // Delay for a bit.
       for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)		
        {
        } 	
	
		  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x0);

       // Delay for a bit.
        for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
        {
				}					

			
			// Turn the LED green
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_3, 0XF );
      // Delay for a bit.
        for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
        {
        }
																										         
      GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x0);

        for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++) // Delay for a bit.
				{
				}
			//purple 	
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_2, 0XF );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_1, 0XF );
				
				for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
				{
				}
			
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_2, 0X0 );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_1, 0X0 );
				
				for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
				{
				}
			//yellow
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_3, 0XF );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_1, 0XF );
				
				for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
        {
        }
				
      GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_3, 0X0 );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_1, 0X0 );
				
				for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
				{
				}
			//cyan
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_3, 0XF );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_2, 0XF );
				
				for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
				{
				}
	    GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_3, 0X0 );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_2, 0X0 );

				for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
				{
				}
				
			//white	
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_3, 0XF );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_2, 0XF );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_1, 0XF );
				
				for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)
				
				{
				}

	    GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_3, 0X0 );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_2, 0X0 );
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_1, 0X0 );
				
				for(ui32Loop = 0; ui32Loop < 1000000; ui32Loop++)

        {
        }
			
    
  }

}
}