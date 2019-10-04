#include "holberton.h"

/**
 * leet - function to encode a string
 * @o : string to be converted
 *Return: converted text
 */

char *leet(char *o)
{
	int i;
	int j;
	char original[] = "aAeEoOtTlL";
	char conv[] = "4433007711";

	for (i = 0; o[i] != '\0'; i++)
	{
		for (j = 0; conv[j] != '\0'; j++)
		{
			if (o[i] == original[j])
			{
				o[i] = conv[j];
			}
		}
	}
	return (o);
}

