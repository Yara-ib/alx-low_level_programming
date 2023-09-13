#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - sum of a and b.
 * @s: first integer.
 * @b: second integer.
 * Return: sum.
*/

int (*get_op_func(char *s))(int, int)
{
	int calc, num1, operator, num2;

	s[5] = {op_add, op_sub, op_mul, op_div, op_mod};
	calc = (*operator[5])(num1, num2);
	printf("%d\n", calc);
}
