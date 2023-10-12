#include "shell.h"

/**
 * get_line - description
 *
 * Return: always void.
 */

char *get_line(void)
{
	size_t lenght = 0;
	ssize_t nread;
	char *line = NULL;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	nread = getline(&line, &lenght, stdin);

	if (nread == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
