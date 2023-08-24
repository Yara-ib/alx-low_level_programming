#include "main.h"
#include <stdio.h>
#include <string.h>

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
	int i;
	n = strlen(dest);

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}
