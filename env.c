#include "simp_shell.h"
/**
 * env_func - this function print the environment
 */
void env_func(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
