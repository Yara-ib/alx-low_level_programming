#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a character in a string
 *
 * @haystack: Parameter for _strstr()
 * @needle: Parameter for _strstr()
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		if (haystack[i] == needle[i])
		{
			return (haystack);
		}
	}
	return ('\0');
}
