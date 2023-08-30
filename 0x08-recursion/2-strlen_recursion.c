#include "main.h"

/**
* _strlen_recursion - Returns the length of a string.
* @s: char as a parameter for the function.
* Return: Always (s)
*/

int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_strlen_recursion(s);
		s++;
		i++;
	}
	return (i);
}
