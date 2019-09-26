#include <stdio.h>
/**
 * main - replace multiple of 3 and 5 for fizz and buzz.
 * Return: 0
 */
int main(void)
{
int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		printf("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
		{
		printf("%d", i);
		}
		if (i != 100)
		printf(" ");
	}
	printf('\n');
	return (0);
}

