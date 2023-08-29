#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Parameter for _memset()
 * @b: Parameter for _memset()
 * @n: Parameter for _memset()
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
