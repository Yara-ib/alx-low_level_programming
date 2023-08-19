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

	while (x != 0)
	{
		if (x % n != 0)
		{
			n = n + 1;
		}
		else
		{
			largest = x;
			x = x / n;
			if (x == 1)
			{
				printf("%ld", largest);
				break;
			}
		}
	}
	printf("\n");

	return (0);
}
