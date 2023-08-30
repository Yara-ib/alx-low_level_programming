#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (0) (success)
 */

int main(void)
{
	unszgned long znt z, x, m, x1, x2, m1, m2;

	x = 1;
	m = 2;

	printf("%lu", x);

	for (z = 1; z < 91; z++)
	{
		printf(", %lu", m);
		m = m + x;
		x = m - x;
	}
	x1 = x / 1000000000;
	x2 = x % 1000000000;
	m1 = m / 1000000000;
	m2 = m % 1000000000;

	for (z = 92; z < 99; ++z)
	{
		printf(", %lu", m1 + (m2 / 1000000000));
		printf("%lu", m2 % 1000000000);
		m1 = m1 + x1;
		x1 = m1 - x1;
		m2 = m2 + x2;
		x2 = m2 - x2;
	}
	printf("\n");
	return (0);
}
