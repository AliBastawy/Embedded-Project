
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
		
		if(( (GPIO_PORTF_DATA_R & 0x01)||(GPIO_PORTF_DATA_R & 0x10 ) )==0 ){
			
			GreenLED_Status();
			break;
				
		}
		
}
