#include "main.h"

/**
 * leet - Entry point
 *
 * @n: Parameter for leet()
 *
 * Return: Always 0 (Success)
 */

char *leet(char *n)
{
	int i = 0;
	int l;
	char z[10] = "4307143071";
	char x[10] = "AEOTLaeotl";

	while ((n[i] != '\0'))
	{
		for (l = 0; l < 10; ++l)
		{
			if (n[i] == x[l])
			{
				n[i] = z[l];
			}
		}
		i++;
	}
	return (n);
}
