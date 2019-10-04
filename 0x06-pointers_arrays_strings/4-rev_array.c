#include "holberton.h"

/**
 * reverse_array - function to reverse content of array
 * @a : array of integers
 * @n : elements to swap
 *
 */

void reverse_array(int *a, int n)
{
	int i, tmp = 0;

	n--;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}

