#include <stdio.h>
#include <string.h>
#include "lexical_tokenisation.h"

/*
Take the string, and break it down into tokens
*/
void lexical_tokenisation(char *command) {
    char *delim = " ";
    char *token;
    char *next_token;

    // printf("%s ", command);

    token = strtok_r(command, delim, &next_token);

    while (token != NULL) {
        printf("%s ", token);
        token = strtok_r(NULL, delim, &next_token);
    }
}