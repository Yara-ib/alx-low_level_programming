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
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x = x + 2;
	}
	_putchar('\n');
}
