#include "main.h"

/**
 * flip_bits - flip one number to another.
 * @n: number to be flipped.
 * @m: number to be flipped with.
 * Return: number of bits needed to flip number to another.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m, num = 0;

	for (; flipped > 0; num++)
		flipped &= (flipped - 1);
	return (num);
}
