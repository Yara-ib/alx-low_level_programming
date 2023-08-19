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

	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}

	else if (i / 10 != 0)
	{
		_putchar('0' + i / 10);
	}
	_putchar('0' + (i % 10);
			_putchar('\n');
}
