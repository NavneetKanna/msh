#include <stdio.h>
#include "read_command.h"
#include "lexical_tokenisation.h"

void msh_loop() 
{
    int status = 1;
    char *command;

    while (status) {
        printf("> ");
        command = read_command();
        lexical_tokenization(command);    

        free(command);    
    }
}

int main() 
{
    msh_loop();
    return 0;
}