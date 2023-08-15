#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: Parameter for print_sign()
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (c > 0)
	{
		_putchar(43);
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
}
