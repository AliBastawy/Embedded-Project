
#include "GlobalvariablesFunctionPrototype.h"
#include "ledFunctions.h"
#include "lCDFunctions.h"
#include "GPSFunctions.h"
#include "DistanceFunctions.h"

//      main function

int main(){
	SCB->CPACR |= ((3UL << 10*2) | (3UL << 11*2) );

	
StartPoint1:

calculateStartingPoint(); // function to read start point and initialize previous lat,long

	
while(1){
 		
		
		calculateDistance();		//function to calculate total distance
		
		
		if (commultiveDistance > distancelimit){  // check on the distance 
			
			GreenLED_Status();
			LCD_Display_continue();
			distancelimit=10000.0;
				
			while(1){
			
				if ( (GPIO_PORTF_DATA_R & 0x01)==0){
					
					RedLED_Status();
					LCD_Display_calc();
					break;
				
				}
				
				else if ( (GPIO_PORTF_DATA_R & 0x10)==0 ){
					
					goto Reached;	
							
				}
			}
			
		}
		
		if( ( (GPIO_PORTF_DATA_R & 0x01)== 0 )  || ( (GPIO_PORTF_DATA_R & 0x10 ) == 0 )  ){
			
			GreenLED_Status();
			break;
				
		}
		
}
	
	
Reached:



LCD_Display_Reached();		         

delay_milli(3000);	

displayDistance();	// to put total distance on the lcd and time taken 
 
delay_milli(6000);
 
LCD_Display_Restart();


while(1){

	restart = Restart();
	if (restart== 1 )	{// function to make the gps repeat the restart and turn off green led led and lcd 
		restart=2;
		goto StartPoint1;
		
	}
	else if (restart==0){
	break;	
	}
		
}

LCD_Command(0x01);   //clear screen command
return 0;

}
	

