#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @a : pointer of an array.
 * @n : number of elements in array.
 */
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		printf("%d", a[cont]);
	if (cont < n - 1)
		printf(", ");
	}
	printf("\n");
}

