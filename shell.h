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

void prompt(char **argv, char **env, bool flag);
int _strcmp(char *str1, char *str2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
char *handle_path(char *argv[], char *command);
void handle_exit(char *cmd);
void runcommand(char **command, char *argv[], char **environ);
char *rmc(char *command);
char *get_path(char *cmd);
char *_getenv(char *string);


#endif
