#include "main.h"
#include <stdio.h>

/**
 * _memset - Copies memory area
 *
 * @s: Parameter for _memset()
 * @b: Parameter for _memset()
 * @n: Parameter for _memset()
 *
 * Return: Always 0 (Success)
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
