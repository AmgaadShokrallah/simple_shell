#include "shell.h"

/**
 * ffree - frees a string
 * @array: parameter
 */

void ffree(char **array)
{
	int i;

	if (array == NULL)
		return;

	for (i = 0; array[i]; i++)
	{
		free(array[i]);
		array[i] = NULL;
	}

	free(array), array = NULL;
}
