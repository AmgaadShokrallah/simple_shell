#include "shell.h"
/**
 * rmcommand - function to remove space
 * @command: parameter
 * Return: command
 */
char *rmcommand(char *command)
{
	char *rmcommand;
	int i = 0, len;

	while (command[i] == ' ')
		i++;
	len = _strlen(command) - i + 1;
	rmcommand = malloc(len + 1);
	if (!rmcommand)
	{
		perror("Failed\n");
		return (NULL);
	}
	_strncpy(rmcommand, command + i, len);
	rmcommand[len] = '\0';
	_strcpy(command, rmcommand);
	free(rmcommand);
	return (command);
}
