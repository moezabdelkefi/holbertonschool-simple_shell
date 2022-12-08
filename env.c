#include "simp_shell.h"

extern char** environ;
void env_func(void)
{
    int i=0;
    while(environ[i]!=NULL){
        printf("%s\n",environ[i++]);
    }
}