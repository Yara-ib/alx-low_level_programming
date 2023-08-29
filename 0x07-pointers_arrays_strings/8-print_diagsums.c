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
	int x, i;

	for (x = 0; x < 8; x++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[x][i]);
		}
		_putchar('\n');
	}
}
