#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

int a;
int b;
int c;

for (c = 0; c < 10; c++)
	{
	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 10; a++)
		{
			if ((a > b) && (b > c))
			{
			putchar (c + '0');
			putchar (b + '0');
			putchar (a + '0');
			if ((a == 9) && (b == 8) && (c == 7))
			;
			else
			{
				putchar (',');
				putchar (' ');
			}
			}
	}
	}
	}
putchar ('\n');
return (0);
}
