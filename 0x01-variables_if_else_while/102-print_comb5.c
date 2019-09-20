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
int d;

for (d = 0; d < 10; d++)
{
	for (c = 0; c < 10; c++)
	{
		for (b = 0; b < 10; b++)
		{
			for (a = 0; a < 10; a++)
			{
				if ((a + (a * 10))  > (c + (d * 10)))
				{
				putchar (d + '0');
				putchar (c + '0');
				putchar (' ');
				putchar (b + '0');
				putchar (a + '0');
				if ((c == 8) && (a == 9) && (b == 9) && (d == 9))
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
}
putchar ('\n');
return (0);
}
