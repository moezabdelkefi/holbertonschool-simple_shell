#ifndef _SHELL_H_
#define _SHELL_H_
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

int main(__attribute__((unused)) int argc, __attribute__((unused)) char *argv[], char *envp[]);
char **tokenization(char *ptr, char *delim);
int comp_exec(char **tokens, char *ptr, char **env);
int exec(char **tokens, char **env);
void free_array(char **tokens);
char *get_location(char* command);
char *var_finder(char *var, char **env);

#endif
