#include "holberton.h"

/**
 * _strcat - function to concatenate two strings.
 *
 * @dest : variable to save resulting string.
 * @src : variable from where the string comes from.
 * Return: char pointer.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr1, *ptr2;

	ptr1 = src;
	ptr2 = dest;

	while (*ptr2 != '\0')
	{
		ptr2++;
	}

	while (*ptr1 != '\0')
	{
		*ptr2 = *ptr1;
		ptr2++;
		ptr1++;
	}
	*ptr2 = '\0';
	return (dest);

}

