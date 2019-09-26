#include "holberton.h"
/**
  * print_line - print n lines of '_'
  * @n : amount of underscores to be printed
  */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}

