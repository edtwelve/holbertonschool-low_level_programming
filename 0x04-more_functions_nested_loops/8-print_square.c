#include "holberton.h"
/**
  * print_square - print a square.
  * @size : Size of the square to be printed.
  */
void print_square(int size)
{
int w, l;

	for (w = 0; w < size; w++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size < 1)
	_putchar('\n');
}
