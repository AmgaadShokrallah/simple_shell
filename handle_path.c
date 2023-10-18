#include "shell.h"

/**
 * path_handler - handle the path function
 * @argv: parameter1
 * @command: parameter2
 * Return: command for execute
 */

char *path_handler(char *argv[], char *command)
{
	char *handl_path;

	handl_path = malloc(_strlen("/bin/") + _strlen(command) + 1);
	if (handl_path == NULL)
	{
		return (NULL);
	}
	_strcpy(handl_path, "/bin/");

	if (command[0] != '/' && command[0] != '.')
	{
		argv[0] = _strcat(handl_path, command);
		return (argv[0]);
	}
	free(handl_path);
	return (command);
}
