#include "shell.h"

/**
 * main - main function
 * @argc: parameter1
 * @argv: parameter2
 * Return: void
 */
int main(int argc, char **argv)
{
	char *line = NULL;
	char **com = NULL;
	int status = 0;
	(void) argc;

	while (1)
	{
		line = get_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		com = tokeniz(line);
		if (com == NULL)
			continue;

		status = _execute(com, argv);
	}
}
