
#ifndef _DISTANCEFUNCTIONS_H_
#define _DISTANCEFUNCTIONS_H_


#include "GlobalvariablesFunctionPrototype.h"


/////////////////////////////////////////////////   Calculating distance functions //////////////////////////////////////////////////


//void readNewDataFromGPS(void){

//}


void calculateStartingPoint(void){
	/* this function will take the starting point from the gps  after fix time and store the longitude and latitude in 
	the globa variable  previiousLat , previousLong which we need in calculating the commulative distance
*/
Turning_ON_GPS();				// function  to make a turn on delay of 38 sec then turn on red led and initiated the GPS

readNewDataFromGPS()	;		

previousLat = latitude;
previousLong = longitude;
	
startlat = previousLat;
startlong = previousLong;	
		
}


void readNewDataFromGPS(void){
	/*  this function will will take longitude and latitude at the time which it has been called and store
these values in the global variables longitude, latitude   . we need it to calculate the commulative distance
*/
	char *ptr;
	char *token;
	

		GPSbufferUpdate(); // function to get the gps data with baudrate 9600 set the GPS_IN line $GPGGA
	
	                
    token = strtok(GPGGALine,",");
    token = strtok(NULL,",");
    token=strtok(NULL,",");
    latitude=strtod(token,&ptr);
    token = strtok(NULL,",");
    token = strtok(NULL,",");
    longitude=strtod(token,&ptr);

	
		longitude=degreeToDecimal(longitude);
		latitude=degreeToDecimal(latitude);
	//BlueLED_Status();	//function to make blue led on to know when it is getting the data for 200 ms then turn it off 
	
}



#endif 
