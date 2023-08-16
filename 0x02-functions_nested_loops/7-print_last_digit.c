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
	int last_digit;
	int m = 2147483648;
	int n = 2147483647;

	if (x < 0)
	{
		x = x * (-1);
		last_digit = x % 10;
	}
	else if (x > 99)
	{
		last_digit = x % 100;
	}
	else if (x == -m)
	{
		last_digit = 8;
	}
	else if (x == n)
	{
		last_digit = 7;
	}
	else
	{
		last_digit = x % 10;
	}

	_putchar('0' + last_digit);
	return (last_digit);

}
