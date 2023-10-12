#include "shell.h"

/**
 * handle_exit - function to exit.
 * @command: parameter
 * Return: void.
 */
void handle_exit(char *command)
{
	if (_strcmp("exit", command) == 0)
	{
		free(command);
		exit(EXIT_SUCCESS);
	}
}
