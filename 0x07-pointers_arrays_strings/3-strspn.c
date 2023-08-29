#include "main.h"
#include <stdio.h>

/**
 * _strspn -  Gets length of a prefix substring
 *
 * @s: Parameter for _strspn()
 * @c: Parameter for _strspn()
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
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
