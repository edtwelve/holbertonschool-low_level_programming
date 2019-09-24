#include "holberton.h"
/**
 *_islower - check for lowercases
 *@c: parameter to check alphabet position
 *
 * Return: 1 if lower 0 if not.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

