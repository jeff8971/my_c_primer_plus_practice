#include <stdio.h>

int function();

int main(void){
  printf("How many times you want to run this function?\n");
  int times;
  scanf("%d", &times);

  int i;
  for (i = 0; i < times; i++){
    printf("The function has been run %d times.\n", function());
  }
  return 0;
}


int function(){
  static int time = 1;
  return time++;
}