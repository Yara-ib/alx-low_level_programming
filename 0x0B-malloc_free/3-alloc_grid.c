#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer 2 dimensional array of integers.
 * @width: height of the grid.
 * @height: width of the grid.
 * Return: pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int **s;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);


	s = malloc(sizeof(int *) * height);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		s[i] = malloc(sizeof(int) * width);
	return (s);
	free(s);
	return (0);
}
