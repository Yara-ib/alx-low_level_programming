#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: number of elements.
 * @max: size of each element.
 * Return: pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *s;
	int i, x, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	s = malloc(sizeof(int) * n);

	if (s == NULL)
		return (NULL);

	for (i = 0, x = min; x < n; i++, x++)
		s[i] = x;
	return (s);
}
