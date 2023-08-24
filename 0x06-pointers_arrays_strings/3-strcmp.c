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
	int i = 0;

	for (x = 0; s1[x] != 0; ++x)
	{
		return ((s1[x] - s2[i]));
		if ((s1[x] - s2[i]) > 0 || ((s1[x] - s2[i]) < 0))
		{
			break;
		}
	}
	return (0);
}
