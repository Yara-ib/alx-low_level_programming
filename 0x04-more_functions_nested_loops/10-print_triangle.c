#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size: Parameter for print_triangle()
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; ++y)
		{
			for (x = 0; x < (size - y - 1); ++x)
			{
				_putchar(' ');
			}
			for (x = 0; x < (y + 1); ++x)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
