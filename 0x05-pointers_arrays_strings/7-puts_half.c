#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str: Parameter for puts_half()
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int z, x = 0;

	while (*(str + x))
	{
		x++;
		z = x / 2;
	}
	if (x % 2)
	{
		z = z + 1;
	}
	while (z < x)
	{
		_putchar(*(str + z));
		z++;
	}
	_putchar('\n');
}
