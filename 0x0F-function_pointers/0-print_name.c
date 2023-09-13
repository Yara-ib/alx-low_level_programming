#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/**
 * print_name - a function that prints a name.
 * @name: pointer to the name.
 * @f: pointer to void function titled f.
 * Return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
	if (f == NULL)
		return;
}
