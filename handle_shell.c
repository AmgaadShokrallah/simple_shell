#include "shell.h"

/**
 * main - main function
 * @argc: parameter1
 * @argv: parameter2
 * @env: parameter3
 * Return: 0
 */
int main(int argc, char *argv[], char **env)
{
	bool inter_active = (argc == 1 && isatty(STDIN_FILENO));

	prompt(argv, env, inter_active);
	return (0);
}