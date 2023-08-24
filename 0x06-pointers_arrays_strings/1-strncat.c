#include "main.h"
#include <string.h>

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
	int len = strlen(dest);
	int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
{
	dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
