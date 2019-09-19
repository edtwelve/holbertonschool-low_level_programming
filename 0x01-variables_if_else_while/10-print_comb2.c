#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int a;

for (a = 0; a <= 99; a++)
        putchar(a + '00');
        if (a <= 99)
                {
                putchar(", ");
                putchar(" ");
                }

        putchar('\n');
        return (0);
}

