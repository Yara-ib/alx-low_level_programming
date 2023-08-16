#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @x: Parameter for print_last_digit()
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{
	int last_digit;

	if (x < 0)
	{
		x = x * (-1);
		last_digit = x % 10;
	}
	else if (x > 99)
	{
		last_digit = x % 100;
	}
	else
	{
		last_digit = x % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);

}
