#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
#include <stdarg.h>
#include <limits.h>
#include <errno.h>

/*MACROS and Global Variables*/

#define TRUE 1
#define EOF_STATUS 255
#define EXCECUTABLE (S_IFREG | S_IXUSR | S_IXGRP | S_IXOTH)
extern char **environ;

/*Function prototypes*/

int _putchar(char c);
char *_getenv(char *name);
/*char *linkPath(const list_PT *head);*/
char **split_for_argv(char *str, char *delimiters);
int program_execution(char **argv, char *line, char *pathname);
int _printf(const char *format, ...);
void sighandler(int sig __attribute__((unused)));
void print_env(void);
int built_ins(char **argv, char *line);
char *_which(char *filename);
int command_exec(char *line);
int prt_err(char *av_0, int cnt, char *line, int status);

char *_strstr(char *haystack, char *needle);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);

#endif /* HOLBERTON_H */
