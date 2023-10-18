#include "shell.h"

/**
 * _execute - the function that run command
 * @command: parameter1
 * @argv: parameter2
 * @environ: parameter3
 */
void _execute(char **command, char *argv[], char **environ)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		if (execve(command[0], command, environ) == (-1))
		{
			write(STDOUT_FILENO, argv[0], _strlen(argv[0]));
			write(STDOUT_FILENO, "\n", 1);
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&status);
	}
}
