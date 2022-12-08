#include "simp_shell.h"
/**
 * free_array - free array of array
 * @tokens: array of strings
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
