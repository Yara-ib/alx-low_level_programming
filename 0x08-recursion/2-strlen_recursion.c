#include "main.h"

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
