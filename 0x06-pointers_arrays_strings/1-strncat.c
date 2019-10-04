#include "holberton.h"

/**
 * _strncat - concatenation of two strings
 *
 * @dest : where the string will be
 * @src : from where the string will be taken
 * @n : number of bytes
 * Return: final result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

