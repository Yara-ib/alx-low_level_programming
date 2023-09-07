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
	int i;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (min + max + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= (min + max + 1); i++)
		s[i] = i;
	return (s);
}
