#include "shell.h"

/**
 * _strcpy - copies string
 * @dest: parameter1
 * @src: parameter2
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int cp = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[cp])
	{
		dest[cp] = src[cp];
		i++;
	}
	dest[cp] = 0;
	return (dest);
}
