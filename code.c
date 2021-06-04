#include "tm4c123gh6pm.h"
#include "stdint.h"
#include "math.h"
//functions Prototype for LCD
void displayDistance(void);
void DistanceToString(void);
void reverse(int);
void LCD_Command(unsigned char );
void LCD_Data(unsigned char );
void delay_micro(int );
void delay_milli(int );
//Global variable needed for LCD functions
int distanceInInteger =0;
char distanceInString [3] ={0};
int  distanceInArray [3] ={0};
//Global Varible needed for all the functions
float commultiveDistance =166.985;     //set it for many values for testing
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
  

void displayDistance(){
	/*
	this function only Prints on the LCD in the first line "  Distance:  " then i move the curser in the second line and make some spaces 
	so that the distance as a number will be printed in the second line starting from the second half  , then we call DistanceToString function
	as LCD only output charchters so we need to convert the global variable  commulativeDistance which holds the total distance coverd to string
	then display it on the screen
	
	*/
	
	int i;
	char *string1="Distance:";
	char *string2=" Meter";

	
	LCD_Init();
	LCD_Command(0x01);   //clear the screen
	LCD_Command(0x80);   //9-bit data 
	delay_milli(500);    // delay to micro controller as LCD is Slow so this delay to keep up with the Proccessor

	for(i = 0; i<9;i++){
		LCD_Data(string1[i]);  //outputing word Distance: 
		delay_milli(1);
	}

	
	LCD_Command(0xC0);  // second line command

	for(i = 0; i<6;i++){
		LCD_Data(' ');           //only spaces to start from second half
		delay_milli(1);
	}
			
	intToStr();         // convert commulative distance to string

	for(i = 0; i<3;i++){
 		LCD_Data(distanceInString[i]);   //outputing commulative distance sting
		delay_milli(1);
	}
	
	for(i = 0; i<6;i++){
		LCD_Data(string2[i]);         //outputing Meter
		delay_milli(1);
	}

	delay_milli(500);	
}

void reverse(int length){
	/*this function reverse the int array to get each position right when display and it add each intger to '0' which conver the sum to charchter
	and store it in char array to be displayed on LCD
	
	*/
    int i = 0;
	  int j = length-1;
	
    while (j>=0) {
        distanceInString[i] = distanceInArray[j]+ '0';
        i++;
        j--;
    }
}
  

void DistanceToString() {		 
		/*
			this function convert the commultive distance to c style string with an algorithm that first take the distance and use remainder operator to get
			the last numeber and then store it in array we repet this untill we get all numbers in a int arary , but they are reversed so we use revered function
			to restore it correctly
	
		*/
	
	int i =0;	 
	distanceInInteger = (int) commultiveDistance;	
	  	
    while (distanceInInteger!=0) {
        distanceInArray[i] = (distanceInInteger % 10);
        distanceInInteger /= 10;
				i++;
    }

		while(i<3){
			distanceInArray[i] =0;    // if the number is less than 3 number i will apper like this  090,044
			i++;
		}
		
    reverse(i);
}


void LCD_Command(unsigned char command){
	GPIO_PORTA_DATA_R &= ~0xE0;    //set R0=0, Rw=0 , E=0 to enable writing to command register in LCD
	GPIO_PORTB_DATA_R = command;   //assign command to portB 
	
	GPIO_PORTA_DATA_R |= 0x80;
	delay_micro(0);
	GPIO_PORTA_DATA_R &= ~0x80;    //assigning enpulse to Enable 
	
	if(command <4){
		delay_micro(2);
	}else{
		delay_micro(37);
	}
}


void LCD_Data(unsigned char data){
	GPIO_PORTA_DATA_R |= 0x20;    
	GPIO_PORTA_DATA_R &= ~0xC0;   //set R0=1, Rw=0 , E=0 to enable writing to data register in LCD

	GPIO_PORTB_DATA_R = data;     //assign data to portB 
	
	GPIO_PORTA_DATA_R |= 0x80;    
	delay_micro(0);
	GPIO_PORTA_DATA_R &= ~0x80;   //assigning enpulse to Enable 
	delay_micro(0);
}



void delay_micro(int n){
	//function that delay the processor with approximately the parameter microseconds 
	int i,j;
	for(i=0 ; i<n ; i++){
			for(j=0;j<3;j++){
			}
	}
}

void delay_milli(int n){
	//function that delay the processor with approximately the parameter milliseconds  
	int i,j;
	for(i=0 ; i<n ; i++){
			for(j=0;j<3180;j++){
			}
	}
}



}
