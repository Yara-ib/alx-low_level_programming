#include "main.h"

/**
 * _islower - check whether a character is a lowercase letter or not.
 * @c: character/integer to be checked.
 * Return: 0: not a lowercase letter || 1: if it's.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * _isalpha - check if the passed character is an alphabet or not.
 * @c: character/integer to be checked.
 * Return: 0: not a letter || 1: if it's.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * _isupper - checks whether the given character is upper case or not.
 * @c: character/integer to be checked.
 * Return: 0: not CAPS || 1: if it's.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

/**
 * _isdigit - check if the passed character is a digit or not.
 * @c: character/integer to be checked.
 * Return: 0: not digit || 1: if it's.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _strcmp - compares these two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0: identical || > 0: s1 is longer || <0: s1 is shorter.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	for (; s1[x] != 0; ++x)
	{
		if ((s1[x] - s2[x]) == 0)
			continue;
		return ((s1[x] - s2[x]));
	}
	return (0);
}
