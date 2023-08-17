#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int x, i;

	for (i = 0; i < 10; ++i)
	{
		for (x = 0; x < 15; ++x)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
