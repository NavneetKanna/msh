#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "read_command/read_command.h"
#include "parse_command/parse_command.h"

void msh_loop() 
{
    int status = 1;

    while (status) {
        printf("> ");
        int *cmd = read_command();


        free(cmd);
        status = 0;
    }
}

int main() 
{
    init_commands();
    msh_loop();
    return 0;
}





/*
implementation 1 = 0.000033 seconds
implementation 2 = 0.000005 seconds

implementation 2 is 6 times faster
*/

/*

a stream is a sequence of data elements made available over time
for testing, ctrl d
*/