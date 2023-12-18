#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 10
#define SIZE 100

// QUICKSORT
void quicksort(int * array, int left, int right){
  int i, j, pivot, temp;
  if (left < right){
    i = left;
    j = right + 1;
    pivot = array[left];
    do{
      do{
        i++;
      } while (array[i] < pivot);
      do{
        j--;
      } while (array[j] > pivot);
      if (i < j){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    } while (i < j);
    temp = array[left];
    array[left] = array[j];
    array[j] = temp;
    quicksort(array, left, j - 1);
    quicksort(array, j + 1, right);
  }
}


int ran_gen(int min, int max){
  return rand() % (max - min + 1) + min;
}

int main(){
  int array[SIZE];
  int i;
  srand((unsigned int) time(0));
  for (i = 0; i < SIZE; i++){
    array[i] = ran_gen(MIN, MAX);
  }

  quicksort(array, 0, SIZE - 1);

  printf("Sorted array:\n");
  for (i = SIZE - 1; i >= 0; i--){
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}