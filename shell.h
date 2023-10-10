#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

define DELIM " \t\n"
extern char **environ;

char *get_line(void);
char **token(char *line);
int _execute(char **command, char **argv);

char *_strdup(const char *);
int _strcmp(char *, char *);
int _strlen(char *);
char *_strcat(char *, char *);
char *_strncpy(char *, char *, int);

void ffree(char **);

#endif
