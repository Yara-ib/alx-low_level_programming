#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest: Parameter for _strncat()
 * @src: Parameter for _strncat()
 * @n: Parameter for _strncat()
 *
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, x;

for (len = 0; dest[len] != '\0'; ++len)
	;

	for (x = 0; x < n && src[x] != '\0'; ++x)
	{
		dest[len + x] = src[x];
	}
	return (dest);
}
