#include "shell.h"
/**
 * runcmd - a function that run command
 * @rgv: parameter1
 * @argv: parameter2
 * @env: parameter3
 */
void runcommand(char **command, char *argv[], char **environ)
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
			/**write(STDOUT_FILENO, ": No such file or directory",
			_strlen(": No such file or directory"));*/
			write(STDOUT_FILENO, "\n", 1);
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&status);
	}
}
