#include "main.h"

/**
 * string_toupper - Entry point
 *
 * @x: Parameter for string_toupper()
 *
 * Return: Always 0 (Success)
 */

char *string_toupper(char *x)
{
	int i;

for (i = 0; x[i] != '\0'; ++i)
{
	if (x[i] <= 'z' && x[i] >= 'a')
	{
		x[i] -= 32;
	}
}
return (x);
}
