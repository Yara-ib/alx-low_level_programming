#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: number of elements.
 * @s2: number of elements.
 * @n: number of elements.
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
	s = malloc(x + y + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	if (n >= y)
	{
		for (z = 0; s2[z] != '\0'; z++, i++)
			s[i] = s2[z];
	}
	else
	{
		for (z = 0; z < n; z++, i++)
			s[i] = s2[z];
	}
	s[i] = '\0';
	return (s);
}
