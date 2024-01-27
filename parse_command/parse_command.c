#include <stdio.h>
#include <stdlib.h>
#include "parse_command.h"
#include "../common/len_of_command.h"

void parse_command(int *cmd_arr) {
    int tmp = 0;
    int sum = 0;
    while (tmp <= len_arr[0].end) {
        sum += cmd_arr[tmp];
        tmp += 1;
    }

    switch (sum)
    {
    case 101+99+104+111:
        printf("echo command typed, yay!!");
        break;
    
    default:
        break;
    }

}