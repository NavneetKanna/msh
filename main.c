#include <stdio.h>
#include "read_inp.h"

void msh_loop() 
{
    int status = 1;

    while (status) {
        printf("> ");
        read_inp();        
    }
}

int main() 
{
    msh_loop();
    return 0;
}