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
	int x = 0, len = 0, n;

	while (str[x++])
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;

		for (x = n; x < len; x++)
		{
			_putchar('\n');
		}
	}
}
