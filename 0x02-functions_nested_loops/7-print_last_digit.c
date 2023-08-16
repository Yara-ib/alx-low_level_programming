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
	int last_digit = x % 10;

	if (x < 0)
	{
		x = x * (-1);
	}
	_putchar(last_digit);
	return (last_digit);

}
