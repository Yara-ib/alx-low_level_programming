#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, ar = 0;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		ar = va_arg(ptr, int);
		if (i < n - 1 && separator != NULL)
			printf("%d%s", ar, separator);
		else
			printf("%d", ar);
	}
	va_end(ptr);
	printf("\n");
}
