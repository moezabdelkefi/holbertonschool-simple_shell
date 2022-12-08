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

### _ Same error with your program hsh:

![Capture d’écran 2022-12-06 011052](https://user-images.githubusercontent.com/113900578/205890253-2d541474-e872-41d5-976a-9282cf4b9b6a.png)

## Compilation:

                                               gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
## Built-Ins 🔨:

### The following built-ins:

env - Print the current environment
exit - exit program sucessfully

## List of allowed functions and system calls:
Function Name| Description


## Flowchart:

![79517219-2adbc000-8013-11ea-9835-30bf7c59a41e tw](https://user-images.githubusercontent.com/113900578/206216347-54e7fdfc-1102-424a-9af9-54ef7819c833.jpg)

## Examples:

Here are shown some examples of the usage of the Shell:

.ls 

$ ls

             AUTHORS  README.md  comp.c  free_array.c  hsh  main.c  man_1_simple_shell  path.c  simp_shell.h  token.c  env.c

$ /bin/ls

             AUTHORS  README.md  comp.c  free_array.c  hsh  main.c  man_1_simple_shell  path.c  simp_shell.h  token.c  env.c

$ ls -l

                                     total 48
                                                -rwxr-xr-x 1 root root 17040 Dec  8 05:41 hsh

                                                drwxr-xr-x 1 root root  4096 Dec  8 05:41 .
 
                                                drwx------ 1 root root  4096 Dec  8 04:35 ..

                                                drwxr-xr-x 1 root root  4096 Dec  8 02:04 .git

                                                -rw-r--r-- 1 root root   787 Dec  8 02:04 comp.c

                                                drwxr-xr-x 1 root root  4096 Dec  8 01:50 .vscode

                                                -rw-r--r-- 1 root root   490 Dec  8 01:46 simp_shell.h

                                                -rw-r--r-- 1 root root   653 Dec  8 01:45 token.c
 
                                                -rw-r--r-- 1 root root  3308 Dec  8 01:45 README.md

                                                -rw-r--r-- 1 root root   206 Dec  8 01:45 AUTHORS

                                                -rw-r--r-- 1 root root  1014 Dec  7 06:03 man_1_simple_shell

                                                -rw-r--r-- 1 root root   603 Dec  7 03:23 main.c

                                                -rw-r--r-- 1 root root   211 Dec  7 03:19 free_array.c

                                                -rw-r--r-- 1 root root  1030 Dec  7 03:17 path.c


$ pwd

                                                      /root/holbertonschool-simple_shell

## Contributors:


https://github.com/s4iTen

https://github.com/moezabdelkefi

https://github.com/iheb-drihmi

## License:

This project is licensed under the Holberton School Software Engineering Program.

Attempt | #1 | #2 | #3 | #4 | #5 | #6 | #7 | #8 | #9 | #10 | #11
--- | --- | --- | --- |--- |--- |--- |--- |--- |--- |--- |---
Seconds | 301 | 283 | 290 | 286 | 289 | 285 | 287 | 287 | 272 | 276 | 269
