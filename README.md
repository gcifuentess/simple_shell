<p align="center">
  <img src="https://i.ibb.co/LYq5RHP/ezgif-com-gif-maker-2.gif">
</p>

## Summary

This repository has been created for the project [0x16. C - Simple Shell](https://intranet.hbtn.io/projects/235). It consists of creating a Simple Shell that performs multiple requirements and tasks.
It must have the exact same output as sh (/ bin / sh) as well as the exact same error output. It only diffences when an error is printed, the name of the program argv [0].

## Resources :books:

* [Everything you need to know to start coding your own shell](https://intranet.hbtn.io/concepts/64).
* [0x16. C - Simple Shell](https://intranet.hbtn.io/projects/235).
* [Unix shell](https://en.wikipedia.org/wiki/Unix_shell).
* [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell).
* [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson).

## Contents :bookmark_tabs:

------
|File Name|Summary content|
|:---:|:---:|
|`simple_shell.c` |Simple SHELL.|
|`_getenv.c` |Function that gets an environment variable.|
|`_printf.c` |Prints a string like output according to a format.|
|`_strcat.c` |Function that concatenates two strings.|
|`_strcmp.c` |Function that compares two strings.|
|`_srtlen.c` |Function that returns the length of a string.|
|`_which.c` |Shows the full path of shell commands.|
|`built_ins.c` |Checks if a received command is or not a built-in function.|
|`command_exec.c` |Executes the command received through the command line.|
|`holberton.h` |Header that contains libraries, functions , structures and macros.|
|`print_env.c` |Prints de environment.|
|`program_ex.c` |Executes the command received through the command line.|
|`sighandler.c` |Sets exit_handler flag on.|
|`split_argv.c` |Splits a string that can be used in argv.|

------

## Learning Objectives :dart:
What you should learn from this project:

* Who designed and implemented the original Unix operating system.
* Who wrote the first version of the UNIX shell.
* Who invented the B programming language (the direct predecessor to the C programming language).
* Who is Ken Thompson.
* How does a shell work.
* What is a pid and a ppid.
* How to manipulate the environment of the current process.
* What is the difference between a function and a system call.
* How to create processes.
* What are the three prototypes of main.
* How does the shell use the PATH to find the programs.
* How to execute another program with the execve system call.
* How to suspend the execution of a process until one of its children terminates.
* What is EOF / “end-of-file”?

## Initial requirements for the project :heavy_check_mark:

* Allowed editors: vi, vim, emacs.
* All your files will be compiled on Ubuntu 14.04 LTS.
* Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic .
* All your files should end with a new line.
* A README.md file, at the root of the folder of the project is mandatory.
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl .
* Your shell should not have any memory leaks.
* No more than 5 functions per file.
* All your header files should be include guarded.
* Use system calls only when you need to (why?).

## Compilation :computer:

* Your shell will be compiled this way:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Autorized functions and macros :white_check_mark:

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

## Flowchart :large_blue_diamond:

![Shell Flow Chart](https://i.ibb.co/0ZtY6FL/Shell-Project.png "Shell Flow Chart")

## Example :pencil:

 ![Shell Flow Chart](https://i.ibb.co/ynHfC45/ejemplo.png "Shell Flow Chart")

## Authors :bust_in_silhouette:
* **Gabriel Cifuentes** - [gcifuentess](https://github.com/gcifuentess/)
* **Julian Camilo Torres** - [Camilo6](https://github.com/Camilo6)
* **Marianella Monroy Ortiz** - [marianellamonroyortizhb](https://github.com/marianellamonroyortizhb)
