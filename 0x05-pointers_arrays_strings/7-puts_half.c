#include "holberton.h"

/**
 * puts_half - function to print second half of a string.
 *
 *@str : string to be printed
 */

void puts_half(char *str)
{

	int l, ml;

	for (l = 0; str[l] != '\0'; l++)
		;
	if (l % 2 != 0)
	{
		l++;
	}

	ml = l / 2;

	for (; str[ml] != '\0'; ml++)
	{
		_putchar(str[ml]);
	}
	_putchar('\n');

}

