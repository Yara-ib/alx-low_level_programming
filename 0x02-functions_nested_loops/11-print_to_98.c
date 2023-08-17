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
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		if (n == 98 && n <= 98)
		{
			printf("%d\n", n);
		}
	}
	else if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		if (n == 98 && n <= 97)
		{
			printf("%d\n", n);
		}
	}
}
