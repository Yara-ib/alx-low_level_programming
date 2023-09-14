#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - sum of a and b.
 * @s: first integer.
 * Return: sum.
*/
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	if (ops == NULL)
		return (NULL);

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
