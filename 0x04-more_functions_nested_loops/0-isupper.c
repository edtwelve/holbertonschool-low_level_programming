#include "holberton.h"

/**
 * _isupper - check for uppercase character.
 *@c: variable to check if a character is uppercase
 * Return: 1 if uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);

return (0);
}

