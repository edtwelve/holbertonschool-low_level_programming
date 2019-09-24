#include "holberton.h"
/**
 *times_table - this function will print 9 times table
 *
 *@o @t @e @x @a: variables for the program
 *
 */

void times_table(void)
{
	int o;
	int t;
	int e;
	int x;
	int a;

	for (o = 0; o <= 9; o++)
	{
	_putchar('0');
		for (t = 1; t <= 9; t++)
		{
		_putchar(',');
		_putchar(' ');
		e = o * t;
			if (e <= 9)
			{
			_putchar(' ');
			_putchar(e + '0');
			}
			else
			{
			x = e / 10;
			a = e % 10;
			_putchar(x + '0');
			_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}

