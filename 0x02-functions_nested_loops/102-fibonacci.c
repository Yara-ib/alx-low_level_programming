#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (0) (success)
 */

int main(void)
{
	long int y, x, z, m;

	x = 1, z = 2;

	for (y = 1; y <= 50; ++y)
	{
		if (x != 20365011074)
		{
			printf("%ld, ", x);
		}
		else
		{
			printf("%ld\n", x);
		}
		m = x + z;
		x = z;
		z = m;
	}
	return (0);
}
