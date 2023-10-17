#include "shell.h"

/**
 * signalHandler -this function to handle Ctrl+C
 * @signal: parameter
 */
void signalHandler(int signal)
{
        (void)signal;
        write(STDOUT_FILENO, "\n$ ", _strlen("\n$ "));
}

/**
 * prompt - shell program
 * @argv: parameter1
 * @env: parameter2
 * @flag: parameter3
 */

void prompt(char **argv, char **env, bool flag)
{
	size_t num = 0;
	ssize_t number = 0;
	char *command = NULL, *r[INT_MAX];
	int m;

	while (true)
	{
		if (flag && isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", _strlen("$ "));
		signal(SIGINT, signalHandler);
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
		handle_exit(command);
		handle_path(r, command);
		while (r[m])
		{
			m++;
			r[m] = strtok(NULL, " \n");
		}
		_execute(r, argv, env);
	}
	free(command);
}
