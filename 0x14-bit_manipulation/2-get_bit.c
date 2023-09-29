#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to be checked.
 * @index: starting from 0 of the bit you want to get.
 * Return: value of the bit at index index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	int b[64];

	if (index >= 64)
		return (-1);

	for (; i < 64; i++)
		b[i] = (n >> i) & 1;

	return (b[index]);
}
