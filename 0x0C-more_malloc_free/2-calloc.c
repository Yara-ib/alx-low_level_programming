#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array set to zero.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(size) * nmemb);

	if (s == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);
}
