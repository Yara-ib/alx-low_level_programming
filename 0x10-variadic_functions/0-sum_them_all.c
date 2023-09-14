#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters.
 * @n: the constant argument.
 * Return: sum of all.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ptr;

	sum = 0;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
