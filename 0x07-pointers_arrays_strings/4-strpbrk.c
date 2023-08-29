#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  Searches a string for any of a set of bytes
 *
 * @s: Parameter for _strpbrk()
 * @c: Parameter for _strpbrk()
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
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
