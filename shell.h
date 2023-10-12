#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

#define DELIM " \t\n"

extern char **environ;

char *get_line(void);
char **tokeniz(char *line);
int _execute(char **command, char **argv);

char *_strdup(const char *str);
int _strcmp(char *str1, char *str2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src);

void ffree(char **array);

#endif
