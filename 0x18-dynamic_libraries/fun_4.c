#include "main.h"

/**
 * _strpbrk - finds 1st character in s1 that matches any character in s2.
 * @accept: string to be scanned.
 * @s: string containing the characters to match.
 * Return: pointer to character in s1 matches one of characters in s2 || NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

/**
 * _strstr -  finds the first occurrence of the string s2 in the string s1.
 * @haystack: string to be scanned.
 * @needle: sub-string to be searched in string.
 * Return:
 *	pointer to the first character of the found s2 in s1.
 *	null pointer if s2 is not present in s1.
 *	If s2 points to an empty string, s1 is returned.
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

/**
 * _strchr - searches for the first occurrence of the character c.
 * @s: string to be scanned.
 * @c: character/integer to be checked.
 * Return: pointer to first occurrence of c in the *s || NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

/**
 * _memset - fill a block of memory with a particular value.
 * @s: starting address of memory to be filled.
 * @b: value to be filled.
 * @n: number of bytes to be filled starting from *s to be filled.
 * Return: pointer to the memory area *s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _memcpy - copies n characters from memory area src to memory area dest.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied.
 * Return: a pointer to the dest string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
