//*********
//
// GPIO registers (PORTA)
//
//*********

#define GPIO_PORTA_DATA_BITS_R  ((volatile unsigned long *)0x40004000)
#define GPIO_PORTA_DATA_R       (*((volatile unsigned long *)0x400043FC))
#define GPIO_PORTA_DIR_R        (*((volatile unsigned long *)0x40004400))
#define GPIO_PORTA_IS_R         (*((volatile unsigned long *)0x40004404))
#define GPIO_PORTA_IBE_R        (*((volatile unsigned long *)0x40004408))
#define GPIO_PORTA_IEV_R        (*((volatile unsigned long *)0x4000440C))
#define GPIO_PORTA_IM_R         (*((volatile unsigned long *)0x40004410))
#define GPIO_PORTA_RIS_R        (*((volatile unsigned long *)0x40004414))
#define GPIO_PORTA_MIS_R        (*((volatile unsigned long *)0x40004418))
#define GPIO_PORTA_ICR_R        (*((volatile unsigned long *)0x4000441C))
#define GPIO_PORTA_AFSEL_R      (*((volatile unsigned long *)0x40004420))
#define GPIO_PORTA_DR2R_R       (*((volatile unsigned long *)0x40004500))
#define GPIO_PORTA_DR4R_R       (*((volatile unsigned long *)0x40004504))
#define GPIO_PORTA_DR8R_R       (*((volatile unsigned long *)0x40004508))
#define GPIO_PORTA_ODR_R        (*((volatile unsigned long *)0x4000450C))
#define GPIO_PORTA_PUR_R        (*((volatile unsigned long *)0x40004510))
#define GPIO_PORTA_PDR_R        (*((volatile unsigned long *)0x40004514))
#define GPIO_PORTA_SLR_R        (*((volatile unsigned long *)0x40004518))
#define GPIO_PORTA_DEN_R        (*((volatile unsigned long *)0x4000451C))
#define GPIO_PORTA_LOCK_R       (*((volatile unsigned long *)0x40004520))
#define GPIO_PORTA_CR_R         (*((volatile unsigned long *)0x40004524))
#define GPIO_PORTA_AMSEL_R      (*((volatile unsigned long *)0x40004528))
#define GPIO_PORTA_PCTL_R       (*((volatile unsigned long *)0x4000452C))
#define GPIO_PORTA_ADCCTL_R     (*((volatile unsigned long *)0x40004530))
#define GPIO_PORTA_DMACTL_R     (*((volatile unsigned long *)0x40004534))

//*********
//
// GPIO registers (PORTB)
//
//*********
#define GPIO_PORTB_DATA_BITS_R  ((volatile unsigned long *)0x40005000)
#define GPIO_PORTB_DATA_R       (*((volatile unsigned long *)0x400053FC))
#define GPIO_PORTB_DIR_R        (*((volatile unsigned long *)0x40005400))
#define GPIO_PORTB_IS_R         (*((volatile unsigned long *)0x40005404))
#define GPIO_PORTB_IBE_R        (*((volatile unsigned long *)0x40005408))
#define GPIO_PORTB_IEV_R        (*((volatile unsigned long *)0x4000540C))
#define GPIO_PORTB_IM_R         (*((volatile unsigned long *)0x40005410))
#define GPIO_PORTB_RIS_R        (*((volatile unsigned long *)0x40005414))
#define GPIO_PORTB_MIS_R        (*((volatile unsigned long *)0x40005418))
#define GPIO_PORTB_ICR_R        (*((volatile unsigned long *)0x4000541C))
#define GPIO_PORTB_AFSEL_R      (*((volatile unsigned long *)0x40005420))
#define GPIO_PORTB_DR2R_R       (*((volatile unsigned long *)0x40005500))
#define GPIO_PORTB_DR4R_R       (*((volatile unsigned long *)0x40005504))
#define GPIO_PORTB_DR8R_R       (*((volatile unsigned long *)0x40005508))
#define GPIO_PORTB_ODR_R        (*((volatile unsigned long *)0x4000550C))
#define GPIO_PORTB_PUR_R        (*((volatile unsigned long *)0x40005510))
#define GPIO_PORTB_PDR_R        (*((volatile unsigned long *)0x40005514))
#define GPIO_PORTB_SLR_R        (*((volatile unsigned long *)0x40005518))
#define GPIO_PORTB_DEN_R        (*((volatile unsigned long *)0x4000551C))
#define GPIO_PORTB_LOCK_R       (*((volatile unsigned long *)0x40005520))
#define GPIO_PORTB_CR_R         (*((volatile unsigned long *)0x40005524))
#define GPIO_PORTB_AMSEL_R      (*((volatile unsigned long *)0x40005528))
#define GPIO_PORTB_PCTL_R       (*((volatile unsigned long *)0x4000552C))
#define GPIO_PORTB_ADCCTL_R     (*((volatile unsigned long *)0x40005530))
#define GPIO_PORTB_DMACTL_R     (*((volatile unsigned long *)0x40005534))
//*********
//
// GPIO registers (PORTF)
//
//*********

#define GPIO_PORTF_DATA_R       (*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R        (*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_AFSEL_R      (*((volatile unsigned long *)0x40025420))
#define GPIO_PORTF_PUR_R        (*((volatile unsigned long *)0x40025510))
#define GPIO_PORTF_DEN_R        (*((volatile unsigned long *)0x4002551C))
#define GPIO_PORTF_LOCK_R       (*((volatile unsigned long *)0x40025520))
#define GPIO_PORTF_CR_R         (*((volatile unsigned long *)0x40025524))
#define GPIO_PORTF_AMSEL_R      (*((volatile unsigned long *)0x40025528))
#define GPIO_PORTF_PCTL_R       (*((volatile unsigned long *)0x4002552C))
#define PF4                     (*((volatile unsigned long *)0x40025040))
#define PF3                     (*((volatile unsigned long *)0x40025020))
#define PF2                     (*((volatile unsigned long *)0x40025010))
#define PF1                     (*((volatile unsigned long *)0x40025008))
#define PF0                     (*((volatile unsigned long *)0x40025004))


//*****************************************************************************
//
// UART registers (UART0)
//
//*****************************************************************************
#define SYSCTL_RCGCUART_R       (*((volatile unsigned long *)0x400FE618))
#define UART0_DR_R              (*((volatile unsigned long *)0x4000C000))
#define UART0_RSR_R             (*((volatile unsigned long *)0x4000C004))
#define UART0_ECR_R             (*((volatile unsigned long *)0x4000C004))
#define UART0_FR_R              (*((volatile unsigned long *)0x4000C018))
#define UART0_ILPR_R            (*((volatile unsigned long *)0x4000C020))
#define UART0_IBRD_R            (*((volatile unsigned long *)0x4000C024))
#define UART0_FBRD_R            (*((volatile unsigned long *)0x4000C028))
#define UART0_LCRH_R            (*((volatile unsigned long *)0x4000C02C))
#define UART0_CTL_R             (*((volatile unsigned long *)0x4000C030))
#define UART0_IFLS_R            (*((volatile unsigned long *)0x4000C034))
#define UART0_IM_R              (*((volatile unsigned long *)0x4000C038))
#define UART0_RIS_R             (*((volatile unsigned long *)0x4000C03C))
#define UART0_MIS_R             (*((volatile unsigned long *)0x4000C040))
#define UART0_ICR_R             (*((volatile unsigned long *)0x4000C044))
#define UART0_DMACTL_R          (*((volatile unsigned long *)0x4000C048))
#define UART0_9BITADDR_R        (*((volatile unsigned long *)0x4000C0A4))
#define UART0_9BITAMASK_R       (*((volatile unsigned long *)0x4000C0A8))
#define UART0_PP_R              (*((volatile unsigned long *)0x4000CFC0))
#define UART0_CC_R              (*((volatile unsigned long *)0x4000CFC8))	
////////////////////////////////////////////////////////////////////////////////////


#include "tm4c123.h"
#include <stdio.h>
#include <math.h>

//defines
#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))
#define SYSCTL_PRGPIO_R         (*((volatile unsigned long *)0x400FEA08))
#define GPIO_LOCK_KEY           0x4C4F434B  // Unlocks the GPIO_CR register
#define d2r			 (3.14 / 180.0)
#define R 			6371
#define delay2			2000

//function Prototype for LCD
void LCD_Init(void);
void displayDistance(void);
void DistanceToString(void);
void reverse(void);
void LCD_Command(unsigned char );
void LCD_Data(unsigned char );
void delay_micro(int );
void delay_milli(int );
//function Prototype for LED
void GreenLED_Status(void);
void GreenLed_Inti(void);
//function Prototype for Calculating the distance
void calculateStartingPoint(void);
void readNewDataFromGPS(void);
void calculateDistance(void);
double haversine(void);
//Fuction prototype for Gps 	
void GPS_Init(void);
////////////////////////////////////////////

//Global Varible needed for all the functions
double commultiveDistance =0;     //set it for many values for testing
//Global variable needed for LCD functions
int distanceInInteger =0;
char distanceInString [5] ={0};
int  distanceInArray [3] ={0};
int distanceDoublePart=0;
//Global variable needed for calculateDistance function
double latitude=30.1056886;
double longitude=31.3744314;
double previousLat=30.1070844;
double previousLong=31.3748067;
//////////////////////////////////////////////////////





//////////////    main function
int main()
{
	SCB->CPACR |= ((3UL << 10*2) | (3UL << 11*2) );	 //to force keil to support floating point representation
	
	GPS_Init();
	calculateStartingPoint();
	while(1){
		calculateDistance();
		if(commultiveDistance>=100){
			break;
		}
	}
	
	displayDistance(); // according to the given global longitudes and latitudes for  testing   the shown distance is 159.2 Meter in LCD which is correct
  	GreenLED_Status();
  
}	
	
///////////////////////////////////////////////////////////////////   LCD functions //////////////////////////////////////////////////	
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

void displayDistance(void){
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

	for(i = 0; i<3;i++){
		LCD_Data(' ');           //only spaces to start from second half
		delay_milli(1);
	}
			
	DistanceToString();         // convert commulative distance to string

	for(i = 0; i<5;i++){
 		LCD_Data(distanceInString[i]);   //outputing commulative distance sting
		delay_milli(1);
	}
	
	for(i = 0; i<6;i++){
		LCD_Data(string2[i]);         //outputing Meter
		delay_milli(1);
	}

	delay_milli(500);	
}

void reverse(void){
	/*this function reverse the int array to get each position right when display and it add each intger to '0' which conver the sum to charchter
	and store it in char array to be displayed on LCD
	
	*/
    int i = 0;
	  int j = 2;
	
    while (j>=0) {
        distanceInString[i] = distanceInArray[j]+ '0';
        i++;
        j--;
    }
}
  

void DistanceToString(void) {		 
		/*
			this function convert the commultive distance to c style string with an algorithm that first take the distance and use remainder operator to get
			the last numeber and then store it in array we repet this untill we get all numbers in a int arary , but they are reversed so we use revered function
			to restore it correctly
	
		*/
	
	int i =0;
    

	distanceInInteger = (int) commultiveDistance;	
	distanceDoublePart = ((commultiveDistance- distanceInInteger)*10); //we should get the double part by this way but float have soe issues 

	
    while (distanceInInteger!=0) {
        distanceInArray[i] = (distanceInInteger % 10);
        distanceInInteger /= 10;
				i++;
    }

		while(i<3){
			distanceInArray[i] =0;    // if the number is less than 3 number i will apper like this  090,044
			i++;
		}
		
    reverse();
    distanceInString[i++] = '.';
    distanceInString[i++] = distanceDoublePart+ '0';
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

/////////////////////////////////////////////////   Calculating distance functions //////////////////////////////////////////////////
void calculateStartingPoint(void){
/* We assume we have this function that we will implement in 2nd Milestone that will take the starting point from the gps 
after fix time and store the longitude and latitude in the globa variable  previiousLat , previousLong which we need in calculating the commulative distance
*/
}

void readNewDataFromGPS(void){
/*  We assume we have this function that we will implement in 2nd Milestone that will take longitude and latitude at the time which it has been called and store
these values in the global variables longitude, latitude   . we need it to calculate the commulative distance
*/
}


void calculateDistance(void){            
/* the first statament in the main is calculateStartingPoint(); so we store this point in our global variable as mention above  then in the while loop we 
call this function which first have a delay for some seconds here we assume it will be 2 seconds but it may be changed during testing then we call readNewDataFromGPS();	    
which read new data and alse store them in the global variabels so now we have 2 longitude and 2 latitude and by haversine function that can calculate the distance betweeen
2 long , 2 lat .Then we store this distance in globale variable commulativeDistance the we store the new data as previous data and as the while loop iterates we repeat the 
funcitionallity and we could calculate the distance
*/
delay_milli(delay2);                //function to make delay(delay2 = 2000 ms defined in the header file) between  the readings of the GPS

readNewDataFromGPS();	                // to set the new latitude and longitude from the GPS

commultiveDistance += haversine();	// haversine is a function to calculate distance between 2 locations

previousLat = latitude; 		
previousLong = longitude;
	

}

double haversine(void)
{
// to calculate the distance between 2 logitudes , 2 latitudes 
	
    double fLong = (longitude - previousLong) * d2r;// d2r is a constant to convert to radian defined in the header
    double fLat = (latitude - previousLat) * d2r;
    double a = pow(sin(fLat/2.0), 2) + cos(previousLat*d2r) * cos(latitude*d2r) * pow(sin(fLong/2.0), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    double d = R * c;		// R is the radius of the Earth Defined in the header file  

    return d * 1000;
}



///////////////////////////////////////////////////////   LED functions ////////////////////////////////////////////////////////

void GreenLed_Inti(void){  	// Initialize PF3  to be used as Green Led

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

void GreenLED_Status(void){ // this function turns green led on when we reached 100 or more meters
	GreenLed_Inti();
	if(commultiveDistance>=100){
           GPIO_PORTF_DATA_R |= 0x08;	
	}
}
	
////////////////////////////////////////////////////    GPS functions    ////////////////////////////////////////////////////// 
void GPS_Init(void)
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

