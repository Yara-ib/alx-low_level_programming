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
	int i, x;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0, x = min; x < (max - min + 1); i++, x++)
		s[i] = x;
	return (s);
}
