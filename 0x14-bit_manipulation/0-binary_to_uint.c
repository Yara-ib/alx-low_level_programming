#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum = (sum << 1) + (b[i] - '0');
		i++;
	}
	return (sum);
}
