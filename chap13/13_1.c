/* count.c -- using standard I/O */
#include <stdio.h>
#include <stdlib.h> // exit() prototype


int main(void)
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    char file_name[100];

    printf("Please enter the file name you want to count.\n");
    scanf("%s", file_name);

    if((fp = fopen(file_name, "r")) == NULL){
        printf("The file %s can not be opened.\n", file_name);
        exit(EXIT_FAILURE);
    }

    while(ch = getc(fp) != EOF){
        putc(ch, stdout);
        count ++;
    }

    fclose(fp);
    printf("The file has %lu characters.\n", count);


    return 0;
}