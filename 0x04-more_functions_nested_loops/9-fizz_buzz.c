#include <stdio.h>
/**
 *main - if is multiple of 3 print fizz, if is multiple of 5 print buzz.
 * if is multiple of both print fizz buzz
 *@i - variable for count and fizzbuzz.
 */
void main(void)
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
}

