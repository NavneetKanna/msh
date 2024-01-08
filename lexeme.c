#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lexeme.h"

/*
Take the string, and break it down into tokens
*/
void lexeme(char *command) {
    char *delim = " ";
    char *token;
    char *next_token;

    token = strtok_r(command, delim, &next_token);

    while (token != NULL) {
        token = strtok_r(NULL, delim, &next_token);
    }
}