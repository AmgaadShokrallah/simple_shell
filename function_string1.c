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

	while (src[cp])
	{
		dest[cp] = src[cp];
		cp++;
	}
	dest[cp] = '\0';
	return (dest);
}
