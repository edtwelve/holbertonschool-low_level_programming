#include <stdio.h>

/**
 * main - Outputs numbers from 00 to 99 with comma and space in between
 *
 * Return: (0) Successful execution
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			b++;


			if (a + b <= 18)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}

	putchar('\n');
	return (0);
}
