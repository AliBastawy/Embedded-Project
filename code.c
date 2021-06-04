#include "tm4c123gh6pm.h"



void LCD_Init(void){
	
	/*
	here we want to initiallize all the pins in Port B  and PA5 PA6 PA7 In port A we use port B for the data and command for LCD
	and PA5 is the Rs(register selector) , PA6 is RW and PA7 E. we make all these Pins GPIO , Digtal , Output and enable change to
  them   and finnaly set some command to initialize the LCD like clear,8-bit data,...	
	
	*/
	SYSCTL_RCGCGPIO_R |= 0x03;
	while(  (SYSCTL_PRGPIO_R&0x03) ==0  ) ;
	

	GPIO_PORTA_CR_R |= 0xE0;
	GPIO_PORTB_CR_R |= 0xFF;
	
	GPIO_PORTA_AMSEL_R &=(unsigned long) ~(0xE0);
	GPIO_PORTB_AMSEL_R &=(unsigned long) ~(0xFF);

	
	GPIO_PORTA_AFSEL_R &=(unsigned long) ~(0xE0);
	GPIO_PORTA_PCTL_R  &= 0x000FFFFFF;
	GPIO_PORTB_AFSEL_R &= (0x00);
	GPIO_PORTB_PCTL_R  &= 0x00000000;
	
	GPIO_PORTA_DEN_R |= 0xE0;
	GPIO_PORTB_DEN_R |= 0xFF;
	
	GPIO_PORTA_DIR_R |= 0xE0;
	GPIO_PORTB_DIR_R |= 0xFF;
	
	GPIO_PORTA_DATA_R &=(unsigned long) ~(0xE0);
	GPIO_PORTB_DATA_R &= (0x00);
	
	LCD_Command(0x38);   //8-bit data command
	LCD_Command(0x06);   //shift crusor right command
	LCD_Command(0x0F);   //turn display on command
	LCD_Command(0x01);   //clear screen command
}

void GPS_Init()
{ 	// Initialize Port A0 and A1 to be used as UART for GPS
	
	SYSCTL_RCGCUART_R |= 0x0001; // activate UART0
	SYSCTL_RCGCUART_R |= 0x0001; // activate port A
	UART0_CTL_R &= ~0x0001; // disable UART
	
	// Buad Rate = 9600, UART System Clock = 16 MHz
	UART0_IBRD_R = 104; // IBRD = int (16*10^6 / (16 * 9600))
	UART0_FBRD_R = 11; // FBRD = int (Decimal *64 + 0.5) 
	
	UART0_LCRH_R = 0x0070; // Enable FIFO & 8-bit length -> 01110000
	UART0_CTL_R = 0x0201; // Enable Rx and UART
	
	GPIO_PORTA_AMSEL_R &= ~0x03; // NO ANALOG on pin PA1-0
	GPIO_PORTA_DEN_R |= 0x03; // Enable Digital on PA1-0
	GPIO_PORTA_AFSEL_R |= 0x03; // Alternate functions of PA1-0 
	GPIO_PORTA_PCTL_R = (GPIO_PORTA_PCTL_R &~ 0x00000011) + 0x00000011; // Enable U0Rx AND U0Tx

}

int main()
{

  LCD_Init();
  GPS_Init()
  
}
