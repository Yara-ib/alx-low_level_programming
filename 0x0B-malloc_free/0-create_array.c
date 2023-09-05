#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars.
 * @size: variable for number in array.
 * @c: special character to be added to the array.
 * Return: pointer to the array, or NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		if (s == NULL || size == 0)
		{
			return (NULL);
		}
		s[i] = c;
	}
	return (s);
}
