#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first array.
 * @s2: second array.
 * @n: number of elements to be added from second array to first one.
 * Return: pointer to the allocated memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, i, y, z;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	x = strlen(s1);
	y = strlen(s2);

	if (n >= y)
		n = y;

	s = malloc(x + n + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (z = 0; z < n; z++, i++)
		s[i] = s2[z];

	s[i] = '\0';
	return (s);
}
