#include "main.h"

/**
 * print_number - Entry point
 *
 * @n: Parameter for print_number()
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (n > 0)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
