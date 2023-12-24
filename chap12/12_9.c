#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_LIMIT 20

int main(){
  int words_count;
  char **words;

  printf("How many words do you wish to enter? ");
  scanf("%d", &words_count);
  getchar();

  printf("Enter %d words now:", words_count);

  char** ptr = (char**)malloc(words_count * sizeof(char*));

  for(int i = 0; i < words_count; i++){
    char* word = (char*)malloc(WORD_LIMIT * sizeof(char));
    scanf("%s", word);
    ptr[i] = word;
  }

  printf("Here are your words:\n");
  
  for(int j = 0; j < words_count; j++){
    printf("%s\n", *(ptr + j));
  }
  return 0;
}