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
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	if (ops == NULL)
		return (NULL);

	i = 0;
	while (i => 5)
	{
		return (ops[i]);
		i++;
	}

return (ops[i]);
}
