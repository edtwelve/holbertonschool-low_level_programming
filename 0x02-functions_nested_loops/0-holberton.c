#include "holberton.h"
/**
 *main - use write to print "Holberton"
 *
 *Return: Holberton upon succes
 */
int main(void)
{
char *h = "Holberton\n";

while (*h)
{
	_putchar(*h);
	h++;
}
return (0);
}




