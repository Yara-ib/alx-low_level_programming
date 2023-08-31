#include "main.h"

int _strlen_recursion(char *s);
int is_palindrome_helper(char *s, int start, int end);

/**
* is_palindrome - Returns string is a palindrome or not.
* @s: char as a parameter for the function.
* Return: is_palindrome.
*/

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, length - 1));
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
* is_palindrome_helper - Returns the length of a string.
* @s: char as a parameter for the function.
* @start: int as a parameter for the function.
* @end: int as a parameter for the function.
* Return: Always (is_palindrome_helper)
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
