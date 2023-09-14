#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: Nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *ar;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		ar = va_arg(ptr, char*);
		if (i < n - 1 && separator != NULL)
			printf("%s%s", ar, separator);
		else if (i < n - 1 && separator != NULL && ar == NULL)
			printf("nil%s", separator);
		else
			printf("%s", ar);
	}
	va_end(ptr);
	printf("\n");
}
