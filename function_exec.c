#include "shell.h"

/**
 * _execute - print commands
 * @command: parameter1
 * @argv: parameter2
 * Return: 1 (success) 0 (failure).
 */

int _execute(char **command, char **argv)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			ffree(command);
			exit(0);
		}
	}
	else
	{
		waitpid(child_pid, &status, 0);
		ffree(command);
	}
	return (WEXITSTATUS(status));
}
