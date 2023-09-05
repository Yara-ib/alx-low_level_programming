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

	i = 0;
	s = malloc(sizeof(*str));
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s);
	free(s);
	return (0);
}
