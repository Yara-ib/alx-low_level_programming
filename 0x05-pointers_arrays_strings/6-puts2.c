#include "main.h"

/**
 * puts2 - Entry point
 *
 * @str: Parameter for puts2()
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int z, x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	for (z = 0; z < x; z = (z + 2))
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
