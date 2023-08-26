#include "main.h"
/**
 * print_times_table - Entry point
 * @n: Parameter for print_times_table()
 */
void print_times_table(int n)
{
	int x, i;

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
				_putchar(' ');
			if ((i * x) > 99)
			{
				_putchar((i * x) / 100 + '0');
				_putchar(((i * x) / 10) % 10 + '0');
				_putchar((i * x) % 10 + '0');
			}
			else if ((i * x) > 9)
			{
				_putchar(' ');
				_putchar((i * x) / 10 + '0');
				_putchar((i * x) % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((i * x) + '0');
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
