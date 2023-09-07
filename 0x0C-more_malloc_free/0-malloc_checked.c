#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of bytes memory need.
 * Return: pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
