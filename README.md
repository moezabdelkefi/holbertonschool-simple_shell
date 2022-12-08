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

List of allowed functions and system calls:

chdir (man 2 chdir)

close (man 2 close)


execve (man 2 execve)

exit (man 3 exit)

_exit (man 2 \_exit)


fork (man 2 fork)

free (man 3 free)

getline (man 3 getline)

getpid (man 2 getpid)

isatty (man 3 isatty)

malloc (man 3 malloc)

open (man 2 open)

perror (man 3 perror)

read (man 2 read)

strtok (man 3 strtok)

wait (man 2 wait)

waitpid (man 2 waitpid)

wait4 (man 2 wait4)

write (man 2 write)

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

USER$ echo "env" | ./hsh

SHELL=/bin/bash

COLORTERM=truecolor

TERM_PROGRAM_VERSION=1.74.0

WSL_DISTRO_NAME=Ubuntu

NAME=DESKTOP-C0MK0L2

PWD=/root/holbertonschool-simple_shell

LOGNAME=root

VSCODE_GIT_ASKPASS_NODE=/root/.vscode-server/bin/5235c6bb189b60b01b1f49062f4ffa42384f8c91/node
MOTD_SHOWN=update-motd

HOME=/root

LANG=C.UTF-8

LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.webp=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:
GIT_ASKPASS=/root/.vscode-server/bin/5235c6bb189b60b01b1f49062f4ffa42384f8c91/extensions/git/dist/askpass.sh

VSCODE_GIT_ASKPASS_EXTRA_ARGS=

LESSCLOSE=/usr/bin/lesspipe %s %s

TERM=xterm-256color

LESSOPEN=| /usr/bin/lesspipe %s

USER=root

VSCODE_GIT_IPC_HANDLE=/tmp/vscode-git-59f1ed6859.sock

SHLVL=0

WSLENV=VSCODE_WSL_EXT_LOCATION/up

VSCODE_GIT_ASKPASS_MAIN=/root/.vscode-server/bin/5235c6bb189b60b01b1f49062f4ffa42384f8c91/extensions/git/dist/askpass-main.js

XDG_DATA_DIRS=/usr/local/share:/usr/share:/var/lib/snapd/desktop

PATH=/root/.vscode-server/bin/5235c6bb189b60b01b1f49062f4ffa42384f8c91/bin/remote-cli:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/mnt/c/Windows/system32:/mnt/c/Windows:/mnt/c/Windows/System32/Wbem:/mnt/c/Windows/System32/WindowsPowerShell/v1.0/:/mnt/c/Windows/System32/OpenSSH/:/mnt/c/Program Files (x86)/NVIDIA Corporation/PhysX/Common:/mnt/c/Program Files/PuTTY/:/mnt/c/Users/Dell/AppData/Local/Microsoft/WindowsApps:/mnt/c/Users/Dell/AppData/Local/Programs/Microsoft VS Code/bin:/snap/bin
HOSTTYPE=x86_64

TERM_PROGRAM=vscode

VSCODE_IPC_HOOK_CLI=/tmp/vscode-ipc-f4277874-8a1d-4e85-b349-dae710f16eea.sock
_=./hsh

## Contributors:


https://github.com/s4iTen

https://github.com/moezabdelkefi

https://github.com/iheb-drihmi

## License:

This project is licensed under the Holberton School Software Engineering Program.

