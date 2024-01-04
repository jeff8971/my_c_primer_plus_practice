/*
Modify the program in Listing 13.5
 so that it uses a command-line interface instead of an
interactive interface.
*/

/* append.c -- appends files to a file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);

int main(int argc, char* argv[])
{
    FILE *fa, *fs;    // fa for append file, fs for source file
    int files = 0;  // number of files appended
    int fct;

    if (argc < 3){
        printf("Usage: %s [append_file][source_file]", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((fa = fopen(argv[1], "a") == NULL)){
        fprintf(stderr, "Can not open %s.\n");
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0){
        fputs("Can not create output buffer.\n", stderr);
        exit(EXIT_FAILURE);
    }

    for (fct = 2; fct < argc; fct++){

    }


}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE]; // allocate once

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');   // look for newline
        if (find)                  // if the address is not NULL
            *find = '\0';          // place a null character there
        else
            while (getchar() == '\n')
                continue;
    }
    return ret_val;
}