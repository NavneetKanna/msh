#include <stdio.h>
#include <stdlib.h>
#include "read_command.h"
#include "lexeme.h"

void msh_loop() 
{
    int status = 1;
    char *command;

    while (status) {
        printf("> ");
        command = read_command();
        lexeme(command);    

        free(command);    

        status = 0;
    }
}

int main() 
{
    msh_loop();
    return 0;
}