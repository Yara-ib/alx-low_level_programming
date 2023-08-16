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
		i = x * (-1);
		i = x % 10;
	}
	else
	{
		i = x % 10;
	}

	_putchar('0' + i);
	return (i);

}
