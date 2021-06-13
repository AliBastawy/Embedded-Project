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


char UART5_read(void){
    while((UART5_FR_R & 0x10) == 0x10);
    return UART5_DR_R & 0xFF;
}


void GPSbufferUpdate(void){
	int flag=0;
	char c;
	int i;
	
	while(flag!=1){
				for(i =0;i<bufferLen;i++){
					c = UART5_read();
					if(c=='\n' || c=='\r'){ 
						break;
					}
					else{
						buffer[i]=c;
						if(i<6)buffer6[i]=c;
					}
				}
				
				if(strcmp(buffer6, "$GPGGA")==0){
					strcpy(GPGGALine,buffer);
					flag=1;
				}
	}

}


void Turning_ON_GPS(void){
	 
	if ((startlong==0.0)&&(startlat==0.0)){
		
		LCD_Display_Processing();			// display >>> Processing Data
		
		PortFF_Int();	// initiate port F
 
	
    UART5_Init();
						// initiate the GPS port
		
	 	GPS_Fixed();	//  the delay1=3800 ms defined in the header 
 
	}
 
	RedLED_Status();		// function to turn red light on when done and keep it ON
 
	LCD_Display_calc();			// display >>>> Calculating Distance 
 

 }

void GPS_Fixed(void){
	while(1){		
		char *token;
		GPSbufferUpdate();
		
		token = strtok(GPGGALine,",");
		token = strtok(NULL,",");
		token = strtok(NULL,",");
		
		fixed=atoi(token);
		
		if(fixed!=0){
			break;
		}
	}
}


double  degreeToDecimal(double value){
    double decimal = (int)( value/100);
    double minuite = value - decimal*100;
    decimal += (minuite / 60);
    
    return decimal;
    
    }


int Restart(void){

	if( (GPIO_PORTF_DATA_R & 0x01)==0 ){
	
		commultiveDistance = 0.0;
		distancelimit=100.0;
		return 1;
		
	}
	else if ( (GPIO_PORTF_DATA_R & 0x10 )==0 ){
			
		return 0;
		
	}
return 0;	
}

#endif
