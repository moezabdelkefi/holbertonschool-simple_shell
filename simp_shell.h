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

int main(int ac, char **av, char **env);
char **tokenization(char *ptr, char *delim);
int comp_exec(char **tokens, char *ptr, char **env);
void free_array(char **tokens);
char *get_location(char *command);

#endif
