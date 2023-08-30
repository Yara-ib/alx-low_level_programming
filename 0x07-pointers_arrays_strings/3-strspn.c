#include "main.h"
#include <stdio.h>

/**
 * _strspn -  Gets length of a prefix substring
 *
 * @accept: Parameter for _strspn()
 * @s: Parameter for _strspn()
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (x);
		}

		s++;
	}

	return (x);
}
