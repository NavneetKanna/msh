#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

void read_command() 
{
    char *inp_buf = (char *) malloc(sizeof(char) * BUFFER_SIZE);

    if (fgets(inp_buf, BUFFER_SIZE, stdin) == NULL) {
        printf("Failure to read input");
        exit(EXIT_FAILURE);
    }

    fputs(inp_buf, stdout);

    free(inp_buf);
}