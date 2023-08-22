#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Entry point
 *
 * @dest: Parameter for _strcpy()
 *
 * @src: Parameter for _strcpy()
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
