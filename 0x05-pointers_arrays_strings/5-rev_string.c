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
	int x = 0, z = 0, y, len;

	while (s[x] != '\0')
	{
		x++;
	}
	len = x - 1;

	for (z = 0; z < x / 2; ++z)
	{
		y = s[z];
		s[z] = s[len];
		s[len] = y;
		len = len - 1;
	}
}
