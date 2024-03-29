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
	int c, cmp;

	for (c = 0; s1[c] != '\0' && s2[c] != '\0'; c++)
	{
		cmp = (s1[c] - s2[c]);
		if (cmp != 0)
		{
		return (cmp);
		}
	}
	return (0);
}

