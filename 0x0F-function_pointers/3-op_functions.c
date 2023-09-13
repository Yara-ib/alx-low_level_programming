#include "3-calc.h"

/**
 * op_add - sum of a and b.
 * @a: first integer.
 * @b: second integer.
 * Return: sum.
*/

int op_add(int a, int b)
{
	int sum;

	sum = 0;
	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtraction of a and b.
 * @a: first integer.
 * @b: second integer.
 * Return: subtraction.
*/

int op_sub(int a, int b)
{
	int sub;

	sub = 0;

	if (a > b)
		sub = a - b;
	else if (a <= b)
		sub = b - a;
	return (sub);
}

/**
 * op_mul - product of a and b.
 * @a: first integer.
 * @b: second integer.
 * Return: result.
*/

int op_mul(int a, int b)
{
	int mul;

	mul = 0;
	mul = a * b;
	return (mul);
}

/**
 * op_div - division of a by b.
 * @a: first integer.
 * @b: second integer.
 * Return: result.
*/

int op_div(int a, int b)
{
	int div;

	div = 0;
	div = a / b;
	return (div);
}

/**
 * op_mod - remainder of the division of a by b.
 * @a: first integer.
 * @b: second integer.
 * Return: result.
*/

int op_mod(int a, int b)
{
	int mod;

	mod = 0;
	mod = a % b;
	return (mod);
}
