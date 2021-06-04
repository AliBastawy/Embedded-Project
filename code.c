#include "tm4c123gh6pm.h"
//function Prototype for LED
void GreenLED_Status();
void GreenLed_Inti();

void GreenLed_Inti(){  	// Initialize PF3  to be used as Green Led

SYSCTL_RCGCGPIO_R |=0x20;
while ((SYSCTL_PRGPIO_R&0x20)==0);
GPIO_PORTF_LOCK_R  =	GPIO_LOCK_KEY;
GPIO_PORTF_CR_R |=0x08;
GPIO_PORTF_AMSEL_R &= ~(0x08);
GPIO_PORTF_AFSEL_R &= ~(0x08);
GPIO_PORTF_PCTL_R &= 0xFFFF0FFF;
GPIO_PORTF_DEN_R |= 0x08;
GPIO_PORTF_DIR_R |= 0x08;

}

void GreenLED_Status(){ // this function turns green led on when we reached 100 or more meters

	if(commultiveDistance>=100){
GPIO_PORTF_DATA_R |= 0x08;	
	}
  
}
