#include <stdio.h>
#include "read_command.h"

void msh_loop() 
{
    int status = 1;

    while (status) {
        printf("> ");
        read_command();        
    }
}

int main() 
{
    msh_loop();
    return 0;
}