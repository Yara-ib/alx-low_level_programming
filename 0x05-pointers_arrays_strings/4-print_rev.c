#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: Parameter for print_rev()
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;
	while (x > -1)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
