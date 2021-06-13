#ifndef _GLOBALVARIABLESFUNCTIONPROTOTYPE_H_
#define _GLOBALVARIABLESFUNCTIONPROTOTYPE_H_


#include "tm4c123gh6pm.h"
#include "tm4c123.h"
#include <stdio.h>
#include <math.h>
#include "string.h"
#include <stdlib.h>

//defines
#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))
#define SYSCTL_PRGPIO_R         (*((volatile unsigned long *)0x400FEA08))
#define GPIO_LOCK_KEY           0x4C4F434B  // Unlocks the GPIO_CR register
#define d2r			 (3.14 / 180.0)
#define R 			6371
#define delay2			2500
#define bufferLen   140

//function Prototype for LCD
void LCD_Init(void);
void displayDistance(void);
void DistanceToString(void);
void reverse(void);
void LCD_Command(unsigned char );
void LCD_Data(unsigned char );
void delay_micro(int );
void delay_milli(int );
void	LCD_Display_continue(void);
void LCD_Display_Processing(void);
void	LCD_Display_calc(void);
void LCD_Display_Reached(void);
void LCD_Display_Restart(void);
//function Prototype for LED
void GreenLED_Status(void);
void PortFF_Int(void);
void RedLED_Status(void);
//function Prototype for Calculating the distance
void readNewDataFromGPS(void);
void calculateDistance(void);
double haversine(void);
void calculateStartingPoint(void);
void readNewDataFromGPS(void);
//Fuction prototype for Gps 	
char UART5_read(void);
void UART5_Init(void);
void GPSbufferUpdate(void);
void GPS_Fixed(void);
void Turning_ON_GPS(void);
double degreeToDecimal(double );
int Restart(void);
////////////////////////////////////////////

//Global Varible needed for all the functions
double commultiveDistance =0.0; 
double startlong=0.0;
double startlat=0.0;
int fixed=0;
double distancelimit = 100.0; 
int restart=2;
//Global variable needed for LCD functions
int distanceInInteger =0;
char distanceInString [5] ={0};
int  distanceInArray [3] ={0};
int distanceDoublePart=0;
//Global variable needed for calculateDistance function
double latitude=0.0;
double longitude=0.0;
double previousLat=0.0;
double previousLong=0.0;
//Global constants for GPS
char buffer[bufferLen] = {0};
char GPGGAbuffer [bufferLen] = {0};
char buffer6[7] = {0};
char GPGGALine[bufferLen] = {0};
//////////////////////////////////////////////////////



#endif 
