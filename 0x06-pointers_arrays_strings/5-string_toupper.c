#include "holberton.h"

/**
 * string_toupper - function that changes all lowercases letters to uppercases
 * @onetwo : array of chharacteers
 * Return: array content
 */

char *string_toupper(char *onetwo)
{
	int c = 0;

	for (c = 0; onetwo[c] != '\0'; c++)
	{
		if (onetwo[c] > 96 && onetwo[c] < 123)
		{
			onetwo[c] -= 32;
		}
	}
	onetwo[c] = '\0';
	return (onetwo);
}

