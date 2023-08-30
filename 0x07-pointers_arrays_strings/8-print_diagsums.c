#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  Searches a string for any of a set of bytes
 *
 * @size: Parameter for print_diagsums()
 * @a: Parameter for print_diagsums()
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, x = 0, z = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		z += a[i];
		a -= size;
	}

	printf("%d, %d\n", x, z);
}
