#include <stdio.h>
#include <stdlib.h>
#include "constant.h"
#include "len_of_command.h"

/*

command[] is used to store the ascii values of the individual chars.
len_arr is a struct used to store the beginning and end index values of the words.

*/
void read_command() 
{
    int command[BUFFER_SIZE] = {0};
    int i = 0, j = 0, start = 0, end = 0;
    length_of_command len_arr[BUFFER_SIZE / 2];
    
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
}