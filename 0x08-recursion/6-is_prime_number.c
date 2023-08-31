#include "main.h"

int is_prime_helper(int n, int i);

/**
* is_prime_number - Returns the factorial of a given number.
* @n: int as a parameter for the function.
* Return: is_prime_number.
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}

/**
* is_prime_helper - Returns the factorial of a given number.
* @n: int as a parameter for the function.
* @i: int as a parameter for the function.
* Return: is_prime_helper.
*/

int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}
