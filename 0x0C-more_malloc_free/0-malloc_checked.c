#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of elements.
 * Return: pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	int *s;

	s = (int *)malloc(sizeof(s) * b);

	if (s == NULL)
		exit(98);

	return (s);
}
