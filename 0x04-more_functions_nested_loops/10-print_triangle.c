#include "holberton.h"
/**
  * print_triangle - function that prints a triangle..
  * @size : size of triangle
  *
  */

void print_triangle(int size)
{
int e, a;

for (e = 1; e <= size; e++)
{
	for (a = 0; a < size; a++)
	{
		if (a >= size - e)
		_putchar('#');
		else
		_putchar(' ');
	}
	_putchar('\n');
}
	if (size <= 0)
	_putchar('\n');
}

