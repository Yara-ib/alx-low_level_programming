#include "main.h"

int _sqrt_helper(int n, int result);

/**
* _sqrt_recursion - Returns the factorial of a given number.
* @n: int as a parameter for the function.
* Return: _sqrt_recursion.
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
* _sqrt_helper - Returns n.
* @n: int as a parameter for the function.
* @result: int as a parameter for the function.
* Return: n.
*/

int _sqrt_helper(int result, int n)
{
	if (n * n == result)
	{
		return (n);
	}
	else if (n * n > result)
	{
		return (-1);
	}
	return (_sqrt_helper(result, n + 1));
}
