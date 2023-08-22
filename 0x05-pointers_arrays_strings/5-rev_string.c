#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: Parameter for rev_string()
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
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
