#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - sum of a and b.
 * @s: first integer.
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

	int i = 0;

	if (ops == NULL)
		return (NULL);

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
