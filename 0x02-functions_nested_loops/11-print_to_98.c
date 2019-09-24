#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - This function will print numbers..
 * @n: reference variable
 */

void print_to_98(int n)
{
int o;

if (n <= 98)
{
	for (o = n; o <= 98; o++)
	{
		printf("%d", o);
		if (o != 98)
		{
		printf(", ");
		}
	}
printf("\n");
}
if (n >= 98)
{
	for (o = n; o >= 98; o--)
	{
	printf("%d", o);
		if (o != 98)
		{
		printf(", ");
		}
	}
printf("\n");
}
}

