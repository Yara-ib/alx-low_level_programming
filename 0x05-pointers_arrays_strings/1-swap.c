#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: Parameter for swap_int()
 *
 * @b: Parameter for swap_int()
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*b = x;
	*a = y;
}
