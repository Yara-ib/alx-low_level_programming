#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 *
 * @s: Parameter for _strchr()
 * @c: Parameter for _strchr()
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
