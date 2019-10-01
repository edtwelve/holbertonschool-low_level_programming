#include "holberton.h"

/**
  * print_rev - function that prints a string in reverse..
  *
  *@s: string that will be printed
  */

void print_rev(char *s)
{
	int a;

	a = _strlen(s);

	while (a != 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar(s[0]);
	_putchar('\n');
}

