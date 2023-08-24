#include "main.h"

/**
 * rot13 - Entry point
 *
 * @x: Parameter for rot13()
 *
 * Return: Always 0 (Success)
 */

char *rot13(char *x)
{
	int i = 0;

	while (x[i] != 0)
	{
		while ((x[i] <= 77 && x[i] >= 65) || (x[i] <= 109 && x[i] >= 97))
		{
			x[i] += 13;
			i++;
		}
		if ((x[i] <= 90 && x[i] >= 78) || (x[i] <= 122 && x[i] >= 110))
		{
			x[i] -= 13;
		}
		i++;
	}
	return (x);
}
