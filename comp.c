#include "simp_shell.h"
/**
 *comp_exec - compare string and execute the command
 *@ptr: command of string
 *@tokens:
 *@env: enviornement variable
 *Return: always(1)
 */
int comp_exec(char **tokens, char *ptr, char **env)
{
    char *comm = NULL;
    pid_t child_pid;
    int status;

    if (strcmp(tokens[0], "exit") == 0)
    {
        free_array(tokens);
        free(ptr);
        exit(0);
    }
    if (strcmp(tokens[0], "env") == 0)
    {
        env_func();
    }
    comm = get_location(tokens[0]);
    child_pid = fork();
    if (child_pid == -1)
        perror("child failed");
    else if (child_pid == 0)
    {
        if (execve(comm, tokens, env) == -1)
        {
            perror("./hsh");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        wait(&status);
        free_array(tokens);
    }
    return (0);
}