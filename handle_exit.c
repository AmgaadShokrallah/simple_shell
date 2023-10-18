#include "shell.h"

/**
 * exit_handler - function to exit.
 * @command: parameter
 * Return: void.
 */

void exit_handler(char *command)
{
	if (_strcmp("exit", command) == 0)
	{
		free(command);
		exit(EXIT_SUCCESS);
	}
}
