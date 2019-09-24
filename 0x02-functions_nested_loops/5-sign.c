#include "holberton.h"

/**
 *sign: print sign of number
 *
 *
 * Return: 1 and + if greater than zero, 0 and 0 if zero, -1 and
 *- if less than zero.
 */

int print_sign(int n)
{
if (n > 0)
	{
	_putchar('+');
	return (1);
	}
else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
else
	{
	_putchar('-');
	return (-1);
	}
}

