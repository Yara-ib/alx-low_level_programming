#include "main.h"

/**
 * _strcat - concatenate (combine) two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to the dest string.
 */

char *_strcat(char *dest, char *src)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; ++i)
	;

	for (x = 0; src[x] != '\0'; ++x, ++i)
		dest[i] = src[x];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strncat - concatenate (combine) two strings with length.
 * @dest: destination string.
 * @src: source string.
 * @n: maximum number of characters to be appended.
 * Return: a pointer to the dest string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, x;

	for (len = 0; dest[len] != '\0'; ++len)
	;

	for (x = 0; x < n && src[x] != '\0'; ++x)
		dest[len + x] = src[x];
	return (dest);
}

/**
 * _strcpy - copy the value of one string to another.
 * @dest: destination string.
 * @src: source string.
 * Return: a pointer to the dest string.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; ++i)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strncpy - copy the value of one string to another.
 * @dest: destination string.
 * @src: source string.
 * @n: maximum number of characters to be appended.
 * Return: a pointer to the dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; ++x)
		dest[x] = src[x];
	for ( ; x < n; ++x)
		dest[x] = '\0';
	return (dest);
}

/**
 * _strspn -  gets length of a prefix substring.
 * @accept: string to be scanned.
 * @s: string containing the characters to match.
 * Return: number of characters in the initial segment of str1
 *		which consist only of characters from str2.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
