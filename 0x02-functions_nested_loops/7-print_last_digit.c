#include "holberton.h"
/**
 *lastdigit: print last digit of a number
 *
 *
 * Return: last digit of a number
 * @i: number to evaluate 
 */

int print_last_digit(int l)
{

int lastdigit = l % 10;

if (l < 0)
	
	{
	lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return(lastdigit);
}

