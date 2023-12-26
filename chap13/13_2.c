#include <stdio.h>
#include <stdlib.h>

#define F_LEN 81



int main(int argc, char *argv[]){

  int byte;
  FILE * origin;
  FILE * copy;

  // error handling
  if (argc != 3){
    printf("Usage: ./copy [original file name] [copy file name]");
    exit(EXIT_FAILURE);
  }

  if((origin = fopen(argv[1], "rb")) == NULL){
    printf("The original file did not exist.\n");
    exit(EXIT_FAILURE);
  }

  if((copy = fopen(argv[2], "wb")) == NULL){
    printf("The copy file can not be created.\n");
    exit(EXIT_FAILURE);
  }


  while(byte = getc(origin) != EOF){
    putc(byte, copy);
  }

  if (fclose(origin) != 0){
    printf("Could not close the original file.\n");
  }

  if (fclose(copy) != 0){
    printf("Could not close the copy file.\n");
  }

  return 0;  
}