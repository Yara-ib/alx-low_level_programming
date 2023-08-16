#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Entry point
 *
 * @x: Parameter for print_last_digit()
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{
	int i;

	if (x < 0)
	{
		x = x * (-1);
		i = x % 10;
	}
	else if (i < 0)
	{
		i = i * (-1);
	}

	_putchar('0' + i);
	return (i);

}
