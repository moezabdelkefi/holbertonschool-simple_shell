#include "simp_shell.h"
/**
 *
 */
void free_array(char **tokens)
{
    int i = 0;
    while (tokens[i])
    {
        free(tokens[i]);
        i++;
    }
    free(tokens);
}
