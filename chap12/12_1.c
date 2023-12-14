#include <stdio.h>

void critics(int *u);
int main(void){
	int unit;

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &unit);
	while(unit != 56){
		critics(&unit);
	}
	printf("You must have it look it up!\n");

	return 0;
}

void critics(int *u){
	printf("No luck, my friend. Try again.\n");
	scanf("%d", u);
}


