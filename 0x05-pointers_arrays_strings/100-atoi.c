#include "main.h"

/**
 * _atoi - Entry point
 *
 * @s: Parameter for _atoi()
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int z = 0;

	do {
		if (*s == '-')
		{
			x *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			z = (z * 10) + (*s - '0');
		}
		else if (z > 0)
			break;
	} while (*s++);
	return (x * z);
}
