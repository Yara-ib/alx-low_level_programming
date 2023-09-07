#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array set to zero.
 * @nmemb: array of elements.
 * @size: size of array.
 * Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	s = malloc(nmemb * (sizeof(size + 1)));

	if (s == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	s[i] = '\0';
	return (s);
}
