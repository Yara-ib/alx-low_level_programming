#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of the string given as a parameter.
 * @str: the to be copied string.
 * Return: pointer to a newly allocated space in memory.
*/

char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;

	s = malloc(sizeof(*str) * (i + 1));

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	s[i] = '\0';
	return (s);
	free(s);
	return (0);
}
