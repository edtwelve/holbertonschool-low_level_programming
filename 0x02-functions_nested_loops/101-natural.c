#include <stdio.h>
/**
 *main - Entry Point
 *Return: always 0
 *
 */
int main(void)
{
int a;
int b = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		b = b + a;
	}
	printf("%d\n", b);
	return (0);
}

