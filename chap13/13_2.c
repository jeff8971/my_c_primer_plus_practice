#include <stdio.h>
#include <stdlib.h>

#define F_LEN 81



int main(int argc, char *argv[]){
  char ch;
  FILE * origin;
  FILE * copy;

  if (argc != 3){
    printf("Usage: ./copy [original file name] [copy file name]");
    exit(EXIT_FAILURE);
  }

  if((origin = fopen("test.txt", "r")) == NULL){
    printf("The original file did not exist.\n");
    exit(EXIT_FAILURE);
  }
  





  return 0;
}