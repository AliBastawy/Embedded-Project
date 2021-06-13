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




#endif 
