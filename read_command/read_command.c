#include <stdio.h>
#include <stdlib.h>
#include "../common/constant.h"
#include "../common/len_of_command.h"
#include "read_command.h"

/*
command[] is used to store the ascii values of the individual chars.
len_arr is a struct used to store the beginning and end index values of the words.
*/
int *read_command() 
{
    int i = 0, j = 0, start = 0, end = 0;
    int *command = (int*)malloc(sizeof(int) * BUFFER_SIZE);

    if (!command) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int ch; (ch = getchar()) != EOF && ch != '\n'; ) {
        if (ch != (int) ' ') {
            command[i++] = ch;
            end += 1;
        } else {
            command[i++] = ch;
            len_arr[j].start = start;
            len_arr[j].end = end - 1; // end is now at space
            end += 1;
            start = end;
            j += 1;
        }
    }
    
    len_arr[j].start = start;
    len_arr[j].end = end - 1;

    return command;
}