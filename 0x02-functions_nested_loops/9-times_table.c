#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, x, n;

	for (i = 0; i < 10; ++i)
	{
		for (x = 0; x < 10; ++x)
		{
			if (x == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (x != 0)
			{
				n = i * x;
			if (n > 9)
			{

				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			if (x < 9)
			{
				_putchar(',');
			}
			}
		}
		_putchar('\n');
	}
}
