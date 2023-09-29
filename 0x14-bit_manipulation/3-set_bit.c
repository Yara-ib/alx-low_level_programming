#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to be checked.
 * @index: starting from 0 of the bit you want to get.
 * Return: 1 if it worked, or -1 if an error occurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
