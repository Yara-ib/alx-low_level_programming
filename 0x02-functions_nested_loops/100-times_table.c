#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: Parameter for print_times_table()
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i, x, z;

	for (i = 0; i < n; ++i)
	{
		for (x = 0; x < n; ++x)
		{
			z = i * x;
			if (n > 9)
			{
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			       	_putchar(' ');
			}
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return (0);
}
