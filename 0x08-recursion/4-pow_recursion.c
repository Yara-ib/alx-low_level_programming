#include "main.h"

/**
* _pow_recursion - Returns the factorial of a given number.
* @x: char as a parameter for the function.
* @y: char as a parameter for the function.
* Return: _pow_recursion.
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
