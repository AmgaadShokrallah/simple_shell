#include "shell.h"

/**
 * prompt - shell program
 * @argv: parameter1
 * @env: parameter2
 */

void prompt(char **argv, char **env)
{
	size_t num = 0;
	ssize_t number = 0;
	char *command = NULL, *r[INT_MAX];
	int m;

	while (true)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", _strlen("$ "));
		number = getline(&command, &num, stdin);
		if (number == -1)
		{
			free(command);
			exit(EXIT_SUCCESS);
		}
		if (command[number - 1] == '\n')
			command[number - 1] = '\0';
		command = rmcommand(command);
		if (_strlen(command) == 0)
			continue;
		m = 0;
		r[m] = strtok(command, " \n");
		exit_handler(command);
		path_handler(r, command);
		while (r[m])
		{
			m++;
			r[m] = strtok(NULL, " \n");
		}
		_execute(r, argv, env);
	}
	free(command);
}
