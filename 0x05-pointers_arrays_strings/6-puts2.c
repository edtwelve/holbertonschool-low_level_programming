#include "holberton.h"

/*
 * puts2 - print every other character of a string.
 *
 * @str: string to print.
 */

void puts2(char *str)
{
	int pos = 0;

	while (str[pos] != '\0')
	{
		if (pos % 2 == 0)
		{
			_putchar(str[pos]);
		}
	pos++;
	}
	_putchar('\n');

}

