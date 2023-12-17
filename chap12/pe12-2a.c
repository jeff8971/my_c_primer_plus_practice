// pe12-2a.c
// compile with pe12-2b.c

#include <stdio.h>
#include "pe12-2a.h"

static int mode;
static double distance;
static double fuel;

// set_mode() prompts the user to enter 0 for metric mode, 1 for US mode.
void set_mode(int m){
	if (m == 0){
		mode = 0;
	}
	else if (m == 1){
		mode = 1;
	}
	else{
		printf("Invalid mode specified. Mode %d(%s) used.\n", mode, mode == 0 ? "metric" : "US");
		mode = 0;
	}
}

// get_info() prompts the user to enter distance traveled and fuel consumed.
void get_info(){
	if (mode == 0){
		printf("Enter distance traveled in kilometers:");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", &fuel);
	}
	else{
		printf("Enter distance traveled in miles:");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", &fuel);
	}
}


// show_info() calculates and displays the fuel consumption.
void show_info(){
	if (mode == 0){
		printf("Fuel consumption is %.2lf liters per 100 km.\n", fuel / distance * 100);
	}
	else{
		printf("Fuel consumption is %.1lf miles per gallon.\n", distance / fuel);
	}
}