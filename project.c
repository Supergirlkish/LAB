#include "project.h"
#include <stdio.h>
#include <stdint.h>
//*****************************************************************************
//
// The error routine that is called if the driver library encounters an error.
//
//*****************************************************************************

#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
}
#endif

void (print_donkey)
	

int  main(void)
{
    volatile uint32_t ui32Loop;
	
    // Enable the GPIO port that is used for the on-board LED.
		SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    
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
			printf("select an option \n");
			printf("1: This is the first thing \n");
			printf("2: This is the second thing \n");
			printf("3: This is the third thing \n");
			
			temp = getc(stdin);
			
			switch(temp)
			{
				case '1': print_chicken;
				break;
				case '2': print_
			}
		}
		
		{
				
			// Turn the LED red
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_1, 0XF );
			 // Delay for a bit.
       for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)
			 GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x0);
       // Delay for a bit.
       for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)
        
			
			//Turn the LED blue
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_2, 0XF );
			 // Delay for a bit.
       for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)		
		  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x0);

       // Delay for a bit.
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)
        	

			
			// Turn the LED green
			GPIOPinWrite (GPIO_PORTF_BASE, GPIO_PIN_3, 0XF );
      // Delay for a bit.
       for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)

																										// GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x0);
																										//  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x0);
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x0);

        // Delay for a bit.
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++)
        {
        }
			//asd;kfjsadf;j
				//;ajfsdkf
    
  }
}
