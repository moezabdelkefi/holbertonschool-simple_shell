<h1 align="center">Project simple_shell</h1>
 
![1587095871027](https://user-images.githubusercontent.com/113900578/205889744-19a2b195-c2f7-46a8-b583-76469237c8bf.png)

## description:

In this project im going to write my own simple UNIX command interpreter, This function is going to work on intractive_mode and non intractive_mode.

## Requirements:

.Allowed editors: vi, vim, emacs.
.All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
.All your files should end with a new line.
.A README.md file, at the root of the folder of the project is mandatory.
.Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
.Your shell should not have any memory leaks.
.No more than 5 functions per file.
.All your header files should be include guarded.
.Use system calls only when you need to (why?).   

## Features:

.Display a prompt and wait for the user to type a command. A command line always ends with a new line.

.The prompt is displayed again each time a command has been executed.

.The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.

.The command lines are made only of one word. No arguments will be passed to programs.

.If an executable cannot be found, print an error message and display the prompt again.

.Handle errors.

.You have to handle the “end of file” condition (Ctrl+D)


name: sh.
## Example of error with sh:

![Capture d’écran 2022-12-06 011022](https://user-images.githubusercontent.com/113900578/205890033-892cb302-e391-40d3-8215-1ec71aa94b3d.png)

### Same error with your program hsh:

![Capture d’écran 2022-12-06 011052](https://user-images.githubusercontent.com/113900578/205890253-2d541474-e872-41d5-976a-9282cf4b9b6a.png)

## Compilation:

                                               gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
## Built-Ins 🔨:

### The following built-ins:

env - Print the current environment
exit - exit program sucessfully

List of allowed functions and system calls:

access (man 2 access)

chdir (man 2 chdir)

close (man 2 close)

closedir (man 3 closedir)

execve (man 2 execve)

exit (man 3 exit)

_exit (man 2 \_exit)

fflush (man 3 fflush)

fork (man 2 fork)

free (man 3 free)

getcwd (man 3 getcwd)

getline (man 3 getline)

getpid (man 2 getpid)

isatty (man 3 isatty)

kill (man 2 kill)

malloc (man 3 malloc)

open (man 2 open)

opendir (man 3 opendir)

perror (man 3 perror)

read (man 2 read)

readdir (man 3 readdir)

signal (man 2 signal)

stat (**xstat) (man 2 stat)

lstat (**lxstat) (man 2 lstat)

fstat (\_\_fxstat) (man 2 fstat)

strtok (man 3 strtok)

wait (man 2 wait)

waitpid (man 2 waitpid)

wait3 (man 2 wait3)

wait4 (man 2 wait4)

write (man 2 write)

## Flowchart:

![79517219-2adbc000-8013-11ea-9835-30bf7c59a41e tw](https://user-images.githubusercontent.com/113900578/206216347-54e7fdfc-1102-424a-9af9-54ef7819c833.jpg)



## Contributors:


https://github.com/s4iTen

https://github.com/moezabdelkefi

https://github.com/iheb-drihmi











## License:

This project is licensed under the Holberton School Software Engineering Program.


Attempt | #1 | #2 | #3 | #4 | #5 | #6 | #7 | #8 | #9 | #10 | #11
--- | --- | --- | --- |--- |--- |--- |--- |--- |--- |--- |---
Seconds | 301 | 283 | 290 | 286 | 289 | 285 | 287 | 287 | 272 | 276 | 269
