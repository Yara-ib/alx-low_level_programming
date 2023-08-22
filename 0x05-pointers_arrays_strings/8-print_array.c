#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * @a: Parameter for print_array()
 *
 * @n: Parameter for print_array()
 *
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n - 1; x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == n - 1)
	{
		printf("%d, ", a[n - 1]);
	}
	printf("\n");
}