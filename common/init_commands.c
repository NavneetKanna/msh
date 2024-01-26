#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
#include "constant.h"
#include "../commands/echo/echo.h"

void init_commands() 
{
    typedef void (*func_ptr)(void);
    func_ptr function_arr[NUM_OF_CMDS];

    function_arr[hash(101+99+104+111)] = &echo; // echo


}