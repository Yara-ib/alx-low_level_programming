#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 *
 * @n: Parameter for print_to_98()
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
		if (n == 98 && n < 98)
		{
			printf("%d\n", n);
		}
		n++;
	}
	while (n > 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
		}
		n--;
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
}
