#include "holberton.h"
/**
 *print_alphabet: Prints the alphabet
 *@a = value where the alphabet goes and increments
 *No return
 */
void print_alphabet(void)
{

int a;

for (a = 'a'; a < 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}

