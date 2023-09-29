#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
*/

int get_endianness(void)
{
	unsigned int num = 1;

	return ((*(unsigned char *)&num == 1) ? 1 : 0);
}
