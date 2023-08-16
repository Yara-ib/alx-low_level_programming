#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, x, y, z, m, n;

	for (i = 0; i < 24; ++i)
	{
		m = i / 10;
		n = i % 10;
		for (x = i + 1; x < 60; ++x)
		{
			y = x / 10;
			z = x % 10;
			_putchar('0' + m);
			_putchar('0' + n);
			_putchar(':');
			_putchar('0' + y);
			_putchar('0' + z);
			if (m == 2 && n == 3 && y == 5 && z == 9)
			{
				break;
			}
			_putchar('\n');
		}
	}
}
