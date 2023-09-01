#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: Parameter for _puts()
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
