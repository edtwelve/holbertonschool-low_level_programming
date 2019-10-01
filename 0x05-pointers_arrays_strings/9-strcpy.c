#include "holberton.h"

/**
 * _strcpy - function that copies the string from a pointer.
 * @dest : where the string must be copied.
 * @src : place from where the string will be copied.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int t = 0;

	while (src[a] != '\0')
	{
		dest[t] = src[a];
		a++;
		t++;
	}
	dest[t] = '\0';
	return (dest);
}

