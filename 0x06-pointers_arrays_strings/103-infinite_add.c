#include "main.h"
#include <string.h>
/**
 * infinite_add - Entry point
 * @n1: Parameter for infinite_add()
 * @n2: Parameter for infinite_add()
 * @size_r: Parameter for infinite_add()
 * @r: Parameter for infinite_add()
 * Return: Always 0 (Success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int r = n = index = 0, x, z, s, new, i, L1 = strlen(n1), L2 = strlen(n2);

	while (L1 > 0 || L2 > 0)
	{
		x = (L1 > 0) ? (n1[L1 - 1] - '0') : 0;
		z = (L2 > 0) ? (n2[L2 - 1] - '0') : 0;
		s = x + z + r;
		if (s > 9)
		{
			r = 1, s -= 10;
		}
		else
		{
			r = 0;
		}
		if (index >= size_r)
		{
			return (0);
		}
		r[index] = s + '0';
		index++, L1--, L2--;
	}
	if (r == 1 && index < size_r)
	{
		r[index] = '1';
		index++;
	}
	if (index >= size_r)
	{
		return (0);
	}
	r[index] = '\0';
	for (i = 0; i < n / 2; ++i)
	{
		new = r[i];
		r[i] = r[(n - 1) - i];
		r[(n - 1) - i] = new;
	}
	return (r);
}
