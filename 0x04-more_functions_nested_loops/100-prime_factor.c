#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n, largest;
	long int x = 612852475143;

	for (n = 2; n <= x; ++n)
	{
		while (x % n == 0)
		{
			if (n > 0)
			{
				largest = n;
			}
			x = x / n;
		}
	}
	printf("%ld\n", largest);

	return (0);
}

