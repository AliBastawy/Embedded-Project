#ifndef _LEDFUNCTIONS_H_
#define _LEDFUNCTIONS_H_
#include "GlobalvariablesFunctionPrototype.h"


///////////////////////////////////////////////////////   LED functions ////////////////////////////////////////////////////////

void PortFF_Int(void){

	SYSCTL_RCGCGPIO_R |=0x20;
	while ((SYSCTL_PRGPIO_R&0x20)==0);
	GPIO_PORTF_LOCK_R  =	GPIO_LOCK_KEY;
	GPIO_PORTF_CR_R |=0x1F;
	GPIO_PORTF_AMSEL_R &= ~(0x1F);
	GPIO_PORTF_AFSEL_R &= ~(0x1F);
	GPIO_PORTF_PCTL_R &= 0xFFF00000;
	GPIO_PORTF_DEN_R |= 0x1F;
	GPIO_PORTF_DIR_R |= 0x0E;
	GPIO_PORTF_PUR_R |= 0x11;

}

void RedLED_Status(void){
	
	GPIO_PORTF_DATA_R &= ~ (0x08);
	GPIO_PORTF_DATA_R |= 0x02;

	
}
void GreenLED_Status(){

	GPIO_PORTF_DATA_R &= ~ (0x02);

	GPIO_PORTF_DATA_R |= 0x08;

}

#endif
