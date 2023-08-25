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
	int x, i, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			for (x = 0; x <= n; ++x)
			{
				if (x == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (x != 0)
			{
				m = i * x;
				_putchar(' ');
			if (m > 99)
			{
				_putchar(m / 100 + '0');
				_putchar((m / 10) % 10 + '0');
				_putchar(m % 10 + '0');
			}
			else if (m > 9)
			{
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			if (x < n)
			{
				_putchar(',');
			}
			}
		}
		_putchar('\n');
	}
	}
}
