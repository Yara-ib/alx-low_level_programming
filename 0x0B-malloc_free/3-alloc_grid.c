#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer 2 dimensional array of integers.
 * @width: height of the s.
 * @height: width of the s.
 * Return: pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = (int **)malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
