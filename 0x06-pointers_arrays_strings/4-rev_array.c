#include "main.h"

/**
 * reverse_array - Entry point
 *
 * @a: Parameter for reverse_array()
 * @n: Parameter for reverse_array()
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; ++i)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}
