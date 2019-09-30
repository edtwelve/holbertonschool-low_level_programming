#include "holberton.h"

/**
   * _strlen - function that return the lenght of string..
   * @s : the string
   * Return: a.
   */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);

}

