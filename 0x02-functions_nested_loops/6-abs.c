#include "main.h"
#include <stdio.h>

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
		x = x * (-1);
		printf("%d\n", x);
	}
	else
	{
	_putchar('0' + x);
	}
	return (0);
}
