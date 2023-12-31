#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line.
* @s: char as a parameter for the function.
* Return: void, nothing.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
	}
	_puts_recursion(s);
}
