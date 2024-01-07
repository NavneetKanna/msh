#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

/*
Read the command and store as a string
*/
char *read_command() 
{
    char *inp_buf = (char *) malloc(BUFFER_SIZE * sizeof(char));

    if (inp_buf == NULL) {
        printf("Error in allocating memory");
        exit(EXIT_FAILURE);
    }

    if (fgets(inp_buf, BUFFER_SIZE, stdin) == NULL) {
        printf("Failure to read input");
        exit(EXIT_FAILURE);
    }

    return inp_buf;
}