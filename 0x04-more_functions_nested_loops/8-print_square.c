#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: Parameter for print_square()
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; ++y)
	{
		for (x = 0; x < size; ++x)
		{
			if (size > 0)
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
