#include "holberton.h"

/**
 * _strncpy - function to copy a string
 * @n : size
 * @dest : save resulting string
 * @src : from where string comes.
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}

