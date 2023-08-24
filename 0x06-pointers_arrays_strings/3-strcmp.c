#include "main.h"

/**
 * _strcmp - Entry point_strcmp
 *
 * @s1: Parameter for _strcmp()
 * @s2: Parameter for _strcmp()
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != 0; ++x)
	{
		if (s1 > s2)
		{
			return (15);
		}
		else if (s1 < s2)
		{
			return (-15);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
