#include "holberton.h"

/**
 * _strcmp - compares between strings
 *
 * @s1: first array of integers
 * @s2: second array of integers
 * Return: result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int cmp = (*s1 - *s2);

	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	if (*s1 != *s2)
	{
		return (cmp);
	}
	}
	return (0);
}

