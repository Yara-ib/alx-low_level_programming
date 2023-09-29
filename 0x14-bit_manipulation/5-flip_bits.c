#include "main.h"

/**
 * flip_bits - flip one number to another.
 * @n: number to be flipped.
 * @m: number to be flipped with.
 * Return: number of bits needed to flip number to another.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
