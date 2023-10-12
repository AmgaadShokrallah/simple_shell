#include "shell.h"

/**
 * _strncmp - compares num of bytes in two string
 * @str1: parameter1
 * @str2: parameter2
 * @n: number of bytes
 * Return: > 0 if str2 is lower than str1, < 0 if str1 great than str2,
 * 0 if strings are equal
 */

int _strncmp(char *str1, char *str2, int n)
{
	if (!n)
		return (0);
	if (*str1 == *str2)
		return (*str1 ? _strncmp(str1 + 1, str2 + 1, n - 1) : 0);
	if (*str1)
		return (1);
	if (*str2)
		return (-1);
	return (*str1 - *str2);
}

/**
 * _strncat - Concantenates two strings 
 * @dest: parameter1
 * @src: Parameter2
 * @n: number of bytes 
 *
 * Return: Pointer
 */

char *_strncat(char *dest, const char *src, size_t n)
{
	size_t len = _strlen(dest);
	size_t j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[len + j] = src[j];
	dest[len + j] = '\0';

	return (dest);
}

/**
 * _strcpy - copies string
 * @dest: parameter1
 * @src: parameter2
 * Return: value of string
 */

char *_strcpy(char *dest, char *src)
{
	int j, lenght = 0;

	while (src[lenght] != '\0')
	{
		lenght++;
	}
	for (j = 0; j < lenght; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
