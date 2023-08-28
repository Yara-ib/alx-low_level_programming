#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 *
 * @dest: Parameter for _memcpy()
 * @src: Parameter for _memcpy()
 * @n: Parameter for _memcpy()
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
