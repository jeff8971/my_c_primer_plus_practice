#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[]){

  char ch;
  FILE * origin;
  FILE * copy;

  // error handling
  if (argc != 3){
    printf("Usage: ./copy [original file name] [copy file name]");
    exit(EXIT_FAILURE);
  }

  if((origin = fopen(argv[1], "r")) == NULL){
    printf("The original file did not exist.\n");
    exit(EXIT_FAILURE);
  }

  if((copy = fopen(argv[2], "w")) == NULL){
    printf("The copy file can not be created.\n");
    exit(EXIT_FAILURE);
  }

  // 
  while((ch = getc(origin)) != EOF){
    if (islower(ch)){
      ch = toupper(ch);
    }
    putc(ch, copy);
  }

  if (fclose(origin) != 0){
    printf("Could not close the original file.\n");
  }

  if (fclose(copy) != 0){
    printf("Could not close the copy file.\n");
  }

  return 0;  
}