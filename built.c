#include "simp_shell.h"
/**
 * func_printenv - prints the current environment
 * @environ: environment variable
 */
void func_printenv(char **environ)
{
    int i = 0;

    for (; environ[i]; i++)
        puts(environ[i]);
}