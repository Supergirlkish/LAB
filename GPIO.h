#include <stdbool.h>
#include <stdint.h>
#include "sysctl.h"
#include "hw_memmap.h"
#include "gpio.h"
#include "adc.h"
#include "uart.h"
#include "tm4c123gh6pm.h"
#include "hw_gpio.h"
#include "hw_types.h"
#include "project.h"

void UpdateMYButtons(void);
1 = pushed down
0 = not pushed

 struct MyButtons;
{
	unit8_t SW1;
 	unit8_t SW2;
	
};

  extern struct MyButtons MyButtons;
