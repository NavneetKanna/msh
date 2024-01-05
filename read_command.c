#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

char *read_command() 
{
    char *inp_buf = (char *) malloc(sizeof(char) * BUFFER_SIZE);

    if (fgets(inp_buf, BUFFER_SIZE, stdin) == NULL) {
        printf("Failure to read input");
        exit(EXIT_FAILURE);
    }

    return inp_buf;
}