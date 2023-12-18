// pe12-3a.c
// compile with pe12-2b.c

#include <stdio.h>
#include "pe12-3a.h"

void check_mode(int * m){
	if (*m == 0){
		printf("Mode 0(metric) used.\n");
	}
	else if (*m == 1){
		printf("Mode 1(US) used.\n");
	}
	else{
		printf("Invalid mode specified. Mode %d(%s) used.\n", *m, *m == 0 ? "metric" : "US");
		*m = 0;
	}
}

// get_info() prompts the user to enter distance traveled and fuel consumed.
void get_info(int mode, double * distance, double * fuel){
	if (mode == 0){
		printf("Enter distance traveled in kilometers:");
		scanf("%lf", distance);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", fuel);
	}
	else{
		printf("Enter distance traveled in miles:");
		scanf("%lf", distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", fuel);
	}
}


// show_info() calculates and displays the fuel consumption.
void show_info(int mode, double distance, double fuel){
	if (mode == 0){
		printf("Fuel consumption is %.2lf liters per 100 km.\n", fuel / distance * 100);
	}
	else{
		printf("Fuel consumption is %.1lf miles per gallon.\n", distance / fuel);
	}
}