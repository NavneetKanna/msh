#include <stdio.h>
#include "read_command.h"

void msh_loop() 
{
    int status = 1;
    char *command;

    while (status) {
        printf("> ");
        command = read_command();    

        free(command);    
    }
}

int main() 
{
    msh_loop();
    return 0;
}