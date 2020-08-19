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


/*Function prototypes*/

int _putchar(char c);
char *_getenv(const char *name);
/*char *linkPath(const list_PT *head);*/
char **split_for_argv(char *str, char *delimiters);
int program_execution(char **argv, char *line, char *pathname);
int _printf(const char *format, ...);
void sighandler(int sig __attribute__((unused)));
void print_env(void);
int built_ins(char **argv, char *line);
char *_which(char *filename);
int command_exec(char *line);


int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);

/*Structures*/

typedef struct list_PATH
{
	char *str;
	struct list_PATH *next;
} list_PT;


#endif /* HOLBERTON_H */
