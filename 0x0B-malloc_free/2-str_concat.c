#include "main.h"
#include <stdlib.h>

/**
 * str_concat - returns a pointer to concatenation of two strings.
 * @s1: first array of strings.
 * @s2: second array of strings.
 * Return: pointer to a newly allocated space in memory for the new array.
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, x, sum;
	char *s;

	sum = 0;

	if (s1 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	;
	sum = i;

	for (x = 0; s2[x] != '\0'; x++)
	;
	sum += x;

	s = malloc(sizeof(char) * (sum + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (x = 0; s2[x] != '\0'; x++, i++)
		s[i] = s2[x];

	s[i] = '\0';
	return (s);
	free(s);
	return (0);
}
