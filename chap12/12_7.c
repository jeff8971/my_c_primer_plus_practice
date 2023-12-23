#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h" // for roll_n_dice()


int main(void){
  int dice, roll;
  int sides;
  int status;
  int set;

  srand((unsigned int) time(0)); // randomize seed
  printf("Enter the number of sets, enter q to stop.\n");
  while(scanf("%d", &set) == 1){
    if (set < 1){
      printf("Enter the number of sets (>1), enter q to stop.\n");
      continue;
    }

    printf("How many sides and how many dice?\n");
    while((status = scanf("%d %d", &sides, &dice)) != 2){
      if (status == EOF)
        break;
      else{
        printf("You should have entered an integer.\n");
        while(getchar() != '\n')
          continue;
        printf("How many sides and how many dice?\n");
      }
    }
    printf("Here are %d sets of %d %d-sided throws.\n", set, dice, sides);
    for (int i = 0; i < set; i++){
      roll = roll_n_dice(dice, sides);
      printf("%d ", roll);
    }
    printf("\n");
  }

  return 0;
}

