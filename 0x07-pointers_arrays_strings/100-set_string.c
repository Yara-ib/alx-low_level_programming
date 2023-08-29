#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 *
 * @s: Parameter for set_string()
 * @to: Parameter for set_string()
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	unsigned int i;

for (i = 0; s[i] != 0; i++)
{
	s[i] = to;
	break;
}
}
