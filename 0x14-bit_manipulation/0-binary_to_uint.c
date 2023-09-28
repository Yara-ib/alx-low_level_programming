#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0.
*/

unsigned int binary_to_uint(const char *b)
{
    int len = strlen(b);
	int i;
    unsigned int total = 0;

    if (!b)
    {
        return (0);
    }

    for (i = 0; i < len; i++)
    {
        if (b[i] == '1')
        {
            total = total * 2 + 1;
        }
        else if (b[i] == '0')
        {
            total *= 2;
        }
        else
        {
            return (0);
        }
    }

    return (total);
}
