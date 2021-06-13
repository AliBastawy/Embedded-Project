#ifndef _GPSFUNCTIONS_H_
#define _GPSFUNCTIONS_H_

#include "GlobalvariablesFunctionPrototype.h"


////////////////////////////////////////////////////    GPS functions    ////////////////////////////////////////////////////// 
void UART5_Init(void){
    SYSCTL_RCGCUART_R |= 0x20;
    while((SYSCTL_PRUART_R & 0x20) == 0);
    SYSCTL_RCGCGPIO_R |= 0x10;
		while((SYSCTL_PRGPIO_R & 0x10) == 0){}
	
	  GPIO_PORTE_CR_R |= 0x30;
    GPIO_PORTE_AMSEL_R &= ~0x30;
    GPIO_PORTE_AFSEL_R |= 0x30;
    GPIO_PORTE_PCTL_R = (GPIO_PORTE_PCTL_R & ~0x00FF0000) | 0x00110000;
    GPIO_PORTE_DEN_R |= 0x30;


    UART5_CTL_R &= ~UART_CTL_UARTEN;
    //set buad rate devider
    UART5_IBRD_R = 104;
    UART5_FBRD_R = 11;
	  UART5_LCRH_R = (UART_LCRH_WLEN_8 | UART_LCRH_FEN);
    UART5_CTL_R |= (UART_CTL_UARTEN | UART_CTL_RXE | UART_CTL_TXE);
}


#endif
