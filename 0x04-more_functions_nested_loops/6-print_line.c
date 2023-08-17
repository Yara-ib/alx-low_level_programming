#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: Parameter for print_line()
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
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
