#include "main.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer 2 dimensional array of integers.
 * @height: height of the s.
 * @grid: width of the s.
 * Return: pointer to a 2 dimensional array of integers.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
