#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, x;

	for (i = 0; i < 10; ++i)
	{
		for (x = 0; x < 10; ++x)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}

	}
}
