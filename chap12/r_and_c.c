// Title: Random and Srand functions
#include <stdio.h>
#include "r_and_c.h"

static unsigned long int next = 1;

int rand1(void){
  next = next * 1103515245 + 12345;
  return (unsigned int)(next / 65536) % 32768;
}

// srand1: set seed for rand1
void srand1(unsigned int seed){
  next = seed;
}