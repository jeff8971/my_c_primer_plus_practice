#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"


#define MAX 10
#define MIN 1

#define SIZE 1000

//extern int rand1(void);
//extern void srand1(unsigned int x);

int main(void){

  int ones = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixes = 0, sevens = 0, eights = 0, nines = 0, tens = 0;
  int temp;

  srand1((unsigned int) time(0));
  for (int i = 0; i < SIZE; i++){
    temp = rand1() % MAX + MIN;
    switch (temp){
      case 1: ones++; break;
      case 2: twos++; break;
      case 3: threes++; break;
      case 4: fours++; break;
      case 5: fives++; break;
      case 6: sixes++; break;
      case 7: sevens++; break;
      case 8: eights++; break;
      case 9: nines++; break;
      case 10: tens++; break;
    }
  }

  printf("1: %d\n", ones);
  printf("2: %d\n", twos);
  printf("3: %d\n", threes);
  printf("4: %d\n", fours);
  printf("5: %d\n", fives);
  printf("6: %d\n", sixes);
  printf("7: %d\n", sevens);
  printf("8: %d\n", eights);
  printf("9: %d\n", nines);
  printf("10: %d\n", tens);
  printf("Total: %d\n", ones + twos + threes + fours + fives + sixes + sevens + eights + nines + tens);
  return 0;
  
}