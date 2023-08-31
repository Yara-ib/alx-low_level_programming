#include "main.h"

/**
* _sqrt_recursion - Returns the factorial of a given number.
* @n: int as a parameter for the function.
* Return: _sqrt_recursion.
*/

int _sqrt_recursion(int n)
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
