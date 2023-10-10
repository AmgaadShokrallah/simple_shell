#include "shell.h"

/**
 * ffree - frees a string
 * @a: parameter
 */

void ffree(char **a)
{
	int i;

	if (a == NULL)
		return;

	for (i = 0; arr[i]; i++)
	{
		free(a[i]);
		a[i] = NULL;
	}

	free(a);
	a = NULL;
}

/**
 * print_prompt - prints the prompt
 *
 * Return: always void.
 */

void print_prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
