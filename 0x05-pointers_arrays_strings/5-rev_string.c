#include "holberton.h"

/**
  * rev_string - function to reverse a string.
  * @s : string to be reversed.
  *
  */


void rev_string(char *s)
{
	int a = 0;
	int l = 0;
	int ot;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;

	for (a = 0; a <= l; a++)
	{
		ot = s[a];
		s[a] = s[l];
		s[l] = ot;
		l--;
	}
}

