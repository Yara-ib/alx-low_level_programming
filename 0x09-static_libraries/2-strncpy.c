#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Entry point_strncpy
 *
 * @dest: Parameter for _strncpy()
 * @src: Parameter for _strncpy()
 * @n: Parameter for _strncpy()
 *
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

for (x = 0; x < n && src[x] != '\0'; ++x)
{
	dest[x] = src[x];
}
for ( ; x < n; ++x)
{
	dest[x] = '\0';
}
return (dest);
}
