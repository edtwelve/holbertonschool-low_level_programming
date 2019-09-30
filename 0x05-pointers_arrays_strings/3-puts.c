#include "holberton.h"

/**
  * _puts - function that prints a string to stdout.
  * @str : string to print
  */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

