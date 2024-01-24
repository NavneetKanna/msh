#ifndef READ_INP
#define READ_INP

#include "constant.h"

typedef struct {
    int start;
    int end;
} length_of_command;

extern length_of_command len_arr[BUFFER_SIZE / 2];

#endif