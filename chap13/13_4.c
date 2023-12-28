/* Programming Exercise 13-4.c */

// Write a program that sequentially displays onscreen all the files listed in the command
// line. Use argc to control a loop.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int byte;
  FILE * source;
  int filect;


  if (argc == 1){
    printf("Usage: ./13_4 [file_name1] [file_name2] ...\n");
    exit(EXIT_FAILURE);
  }


  for (filect = 1; filect < argc; filect++){
    if ((source = fopen(argv[filect], "r")) == NULL){
      printf("Could not open the file.\n");
      exit(EXIT_FAILURE);
    }
    while((byte = getc(source)) != EOF){
      putchar(byte);
    }
    printf("\n");
    printf("\n");
  }

  return 0;


}