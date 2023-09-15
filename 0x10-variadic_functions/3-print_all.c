#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints strings, followed by a new line.
 * @format: a list of types of arguments passed to the function.
 * Return: Nothing.
*/

void print_all(const char * const format, ...)
{
	va_list ptr;
	char *s;
	unsigned int x = 0;
	char *separator = "";

	va_start(ptr, format);

	while (format && format[x])
	{
		switch (format[x])
		{
		case 'c':
			printf("%s%c", separator, va_arg(ptr, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(ptr, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(ptr, double));
			break;
		case 's':
			s = va_arg(ptr, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", separator, s);
			break;
		default:
			x++;
			continue;
		}

		separator = ", ";
		x++;
	}

	va_end(ptr);
	printf("\n");
}
