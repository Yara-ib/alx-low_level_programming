#include "main.h"

/**
 * _abs - Entry point
 *
 * @x: Parameter for _abs()
 *
 * Return: Always 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
	{
	_putchar('0' + (x * -1));
	}
	else
	{
	_putchar('0' + x);
	}
	return (0);
}