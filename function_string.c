
#include "shell.h"

/**
 * _strcmp - compares two strings
 * @str1: parameter1
 * @str2: parameter2
 * Return: val
 */
int _strcmp(char *str1, char *str2)
{
	int c = 0;

	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	if (str1 != str2)
		c = *str1 - *str2;

	return (c);
}

/**
 * _strncpy - copies char
 * @dest: parameter1
 * @src: parameter2
 * @n: int argument
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}

/**
 * _strcat - This function concatenates two strings
 * @dest: string agument
 * @src: string argument
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	int lenght = 0, l = 0, i;

	while (src[lenght] != '\0')
	{
		lenght++;
	}
	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < lenght; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + lenght] = '\0';
	return (dest);
}

/**
 * _strlen - return length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}