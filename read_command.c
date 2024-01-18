#include <stdio.h>
#include <stdlib.h>
#include "constant.h"


read_command() 
{
    int command[BUFFER_SIZE] = {0};
    int i = 0;

    for (int ch; (ch = getchar()) != EOF && ch != '\n'; ) {
        if (ch != (int) ' ') {
            command[i++] = ch;
        } else {
            command[i++] = ch;
        }
    }

    

}