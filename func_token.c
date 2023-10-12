#include "shell.h"

/**
 * *tokeniz - gets the command tokens
 * @line: parameter
 *
 * Return: command
 */

char **tokeniz(char *line)
{
	char *token, *p, **command = NULL;
	int c = 0, i = 0;

	if (line == NULL)
		return (NULL);

	p = _strdup(line);
	token = strtok(p, DELIM);
	if (!token)
	{
		free(line), line = NULL;
		free(p), p = NULL;
		return (NULL);
	}
	while (token)
	{
		i++;
		token = strtok(NULL, DELIM);
	}
	free(p), p = NULL;

	command = malloc(sizeof(char *) * (i + 1));

	if (!command)
	{
		free(line), line = NULL;
		free(p), p = NULL;
		return (NULL);
	}
	token = strtok(line, DELIM);
	while (token)
	{
		command[c++] = _strdup(token);
		token = strtok(NULL, DELIM);
	}
	command[c] = NULL;
	free(line), line = NULL;

	return (command);
}
