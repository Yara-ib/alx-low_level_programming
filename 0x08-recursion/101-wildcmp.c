#include "main.h"

int _strlen_recursion(char *s);
int wildcmp_helper(char *s1, char *s2, int start);

/**
* wildcmp - Compares two strings.
* @s1: char as a parameter for the function.
* @s2: char as a parameter for the function.
* Return: wildcmp.
*/

int wildcmp(char *s1, char *s2)
{
	int start = 0;

	return (wildcmp_helper(s1, s2, start + 1));
}

/**
* _strlen_recursion - Returns the length of a string.
* @s: char as a parameter for the function.
* Return: Always (s)
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
* wildcmp_helper - Returns the length of a string.
* @s1: char as a parameter for the function.
* @s2: char as a parameter for the function.
* @start: int as a parameter for the function.
* Return: Always (wildcmp_helper)
*/

int wildcmp_helper(char *s1, char *s2, int start)
{
	if (s1[start] == s2[start])
	{
		return (1);
	}
	if (s1[start] != s2[start])
	{
		return (0);
	}
	return (wildcmp_helper(s1, s2, start + 1));
}
