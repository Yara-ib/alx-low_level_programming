#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: Parameter for print_diagonal()
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (n > 0)
		{
			_putchar(' ');
		}
	}
	_putchar(92);
	_putchar('\n');
}
