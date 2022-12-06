#include "simp_shell.h"
/**
 * tokenization - Extract tokens from the getline command
 *
 * @ptr: String of the command line
 * @delim: Delimiter
 *
 * Return: Array of tokens
 */

char **tokenization(char *ptr, char *delim)
{
    char *token = NULL, **tokens = NULL;
    int i = 0;
    /*know the exact length of the command and mallocing*/
    tokens = malloc(sizeof(char *) * strlen(ptr));

    token = strtok(ptr, delim);
    while (token)
    {
        tokens[i] = malloc(sizeof(char) * strlen(token) + 1);
        /*copy each token to the newly malloced space*/
        strcpy(tokens[i], token);
        i++;
        token = NULL;
        token = strtok(NULL, delim);
    }
    tokens[i] = NULL;
    return (tokens);
}