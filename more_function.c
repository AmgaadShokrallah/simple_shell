#include "shell.h"
/**
 * rmcommand - function to remove space
 * @command: parameter
 * Return: command
 */

char *rmcommand(char *command)
{
	char *rmcommand;
	int lenght;
	int i = 0;

	while (command[i] == ' ')
		i++;
	lenght = _strlen(command) - i + 1;
	rmcommand = malloc(1 + lenght);
	if (rmcommand == NULL)
	{
		perror("Failed\n");
		return (NULL);
	}
	_strncpy(rmcommand, command + i, lenght);
	rmcommand[lenght] = '\0';
	_strcpy(command, rmcommand);
	free(rmcommand);
	return (command);
}
