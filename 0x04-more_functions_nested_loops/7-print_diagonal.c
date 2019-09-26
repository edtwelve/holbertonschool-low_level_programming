#include "holberton.h"
/**
  * print_diagonal - function that draws a diagonal line on terminal..
  * @n : times to print the '/' character
  * Return: Always 0.
  */

void print_diagonal(int n)
{
int s, e;

	for (s = 0; s < n; s++)
	{
		for (e = 0; e < s; e++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	_putchar('\n');
}

