#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Entry point
 * @n: Parameter for print_times_table()
 */

void print_times_table(int n)
{
	int i, x, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (x = 1; x <= n; x++)
			{
				_putchar(',');
				_putchar(' ');

				m = i * x;

				if (m <= 99)
					_putchar(' ');
				if (m <= 9)
					_putchar(' ');

				if (m >= 100)
				{
					_putchar((m / 100) + '0');
					_putchar(((m / 10)) % 10 + '0');
				}
				else if (m <= 99 && m >= 10)
				{
					_putchar((m / 10) + '0');
				}
				_putchar((m % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
