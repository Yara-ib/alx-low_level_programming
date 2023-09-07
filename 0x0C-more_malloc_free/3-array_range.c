#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: number of elements.
 * @max: size of each element.
 * Return: pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *s;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = min++;

	return (s);
}
