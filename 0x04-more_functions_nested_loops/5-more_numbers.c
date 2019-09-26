#include "holberton.h"
/**
   * more_numbers - prints 10 times the numbers from 0 to 14..
   *
   * .
   */

void more_numbers(void)
{
int cont, cont2;

for (cont = 0; cont < 10; cont++)
{
	for (cont2 = 0; cont2 <= 14; cont2++)
	{
		if (cont2 > 9)
		_putchar(cont2 / 10 + '0');
		_putchar(cont2 % 10 + '0');
	}
	_putchar('\n');
}
}

