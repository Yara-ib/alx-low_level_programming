#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block.
 * Return: pointer to the newly allocated space.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *n;
	unsigned int i;

	n = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		s[i] = n[i];

	free(ptr);
	return (s);
}
