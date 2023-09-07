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
	int *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(sizeof(size) * (nmemb + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	s[i] = '\0';
	return (s);
}
