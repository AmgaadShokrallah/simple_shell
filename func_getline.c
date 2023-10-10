#include "shell.h"

char *get_line(void)
{
	size_t lenght = 0;
	ssize_t i;
	char *line = NULL;

	if (isatty(STDIN_FILENO))
		print_prompt();

	i = getline(&line, &lenght, stdin);

	if ( i == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}	
