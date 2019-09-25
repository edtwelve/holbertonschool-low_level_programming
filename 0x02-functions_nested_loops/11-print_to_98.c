#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - This function will print numbers..
 * @n: reference variable
 */

void print_to_98(int n)
{

if (n < 98)
{
	for (; n <= 98; n++)
	{
		if (n != 98)
		{
		printf("%d, ", n);
		}
		else
		{
		printf("%d\n", n);
		}
	}
} else if (n > 98)
{
	for (; n >= 98; n--)
	{
		if (n != 98)
		printf("%d, ", n);
		else
		printf("%d\n", n);
	}
} else
	printf("98\n");
}


