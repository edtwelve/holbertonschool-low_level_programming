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
char a;
for (a = 'a'; a <= 'z'; a++)
{
	if ('q' != a && 'e' != a)
	{
	putchar(a);
	}
}
	putchar('\n');
	return (0);
}

