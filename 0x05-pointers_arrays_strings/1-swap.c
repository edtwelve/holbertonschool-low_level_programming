#include "holberton.h"

/**
  * swap_int - swaps value for two integers.
  * @a: first value to be changed.
  * @b: second value to be changed.
  */

void swap_int(int *a, int *b)
{

	int auxdir = *a;
	*a = *b;
	*b = auxdir;
}
