#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, x;

	for (i = 0; i < 24; ++i)
	{
		for (x = 0; x < 60; ++x)
		{
			_putchar('0' + i);
			_putchar(':');
			_putchar('0' + x);
			if (i == 23 && x == 59)
			{
				break;
			}
			_putchar('\n');
		}
	}
}
