#include "shell.h"

/**
 * _strlen - return the length of string
 * @s: parameter
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght])
		lenght++;
	return (lenght);
}

/**
 * _strcmp - compares two strings character by character.
 * @str1: parameter1
 * @str2: parameter2
 *
 * Return: negative if str1 lower than str2, positive if
 * str1 great than str2, 0 if strings are equal
 */

int _strcmp(char *str1, char *str2)
{
	int c;

	c = (int)*str1 - (int)*str2;
	while (*str1)
	{
		if (*str1 != *str2)
			break;
		str1++;
		str2++;
		c = (int)*str1 - (int)*str2;
	}
	return (c);
}


/**
 * _strcat - concatenates two strings
 * @dest: parameter1
 * @src: parameter2
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';
	return (dest);
}

/**
 * _strdup - function duplicate string
 * @str: parameter
 *
 * Return: pointer
 */
char *_strdup(const char *str)
{
	int lenght = 0;
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[lenght])
		lenght++;

	p = malloc(sizeof(char) * (lenght + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= lenght; i++)
		p[i] = str[i];
	return (p);
}
