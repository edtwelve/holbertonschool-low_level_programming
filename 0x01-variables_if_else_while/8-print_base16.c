#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char e;
char a;


	for (e = 0; e <= 9; e++)

	{
	putchar(e + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}

