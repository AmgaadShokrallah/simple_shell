#include "shell.h"

/**
 * _strlen - return the length of string
 * @s: parameter
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
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
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
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
		p++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = *src;

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
	char *p;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	p = malloc(sizeof(char) * (lenght + 1));
	if (!p)
		return (NULL);
	for (length++; length--;)
		p[length] = *--str;
	return (p);
}
