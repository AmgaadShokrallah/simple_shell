#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>

#define INT_MAX 100

extern char **environ;

int _strcmp(char *str1, char *str2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strncpy(char *dest, char *source, int n);
void prompt(char **argv, char **env, bool f);
char *path_handler(char *argv[], char *command);
void exit_handler(char *command);
void _execute(char **command, char *argv[], char **environ);
char *rmcommand(char *command);
char *get_path(char *commandd);
char *_getenv(char *string);


#endif
