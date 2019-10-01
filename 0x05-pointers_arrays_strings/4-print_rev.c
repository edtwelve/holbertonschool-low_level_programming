#include "holberton.h"

/**
  * print_rev - function that prints a string in reverse..
  *
  *@s: string that will be printed
  */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	a--;
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

