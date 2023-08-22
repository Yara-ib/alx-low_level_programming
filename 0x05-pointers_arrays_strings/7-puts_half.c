#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 *
 * @str: Parameter for puts_half()
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;
	int x = 0;

	if (len % 2 == 0)
	{
		for (x = n + 1; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		_putchar(str[n]);
		for (x = n + 1; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
