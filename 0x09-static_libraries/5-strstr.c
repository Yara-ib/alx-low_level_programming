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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
