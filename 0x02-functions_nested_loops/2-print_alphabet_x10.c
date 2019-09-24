#include "holberton.h"
/**
 * printalphabetx10 - Print the alphabet 10 times in lowercase
 *@a @b: variables, a contains the alphabet, b counts the times of repetitions
 *
 */
void print_alphabet_x10(void)
{

int b;
while (b < 10)
{
	char a = 'a';

	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
	b++;
}
}
