#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: pointer to the name.
 * @f: pointer to void function titled f.
 * Return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}