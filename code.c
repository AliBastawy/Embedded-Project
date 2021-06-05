// to calculate the distance 


void distance(){

Delayms(delay2);                //function to make delay(delay2 = 2000 ms defined in the header file) between  the readings of the GPS

ReadData();	                // to set the new latitude and longitude from the GPS

Totaldistance += haversine();	// haversine is a function to calculate distance between 2 locations

previouslat = latitude; 		
previouslong = longitude;

}
