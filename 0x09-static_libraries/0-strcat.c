#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point
 *
 * @dest: Parameter for _strcat()
 *
 * @src: Parameter for _strcat()
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; ++i)
	;

	for (x = 0; src[x] != '\0'; ++x, ++i)
	{
		dest[i] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
