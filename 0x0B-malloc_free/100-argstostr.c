#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program in new string.
 * @ac: arguments counts.
 * @av: pointer to arguments values passed.
 * Return: pointer to a new string, or NULL if it fails.
*/

char *argstostr(int ac, char **av)
{
	int i, sum, length, x;
	char *str;

	sum = x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		sum += strlen(av[i]) + 1;

	str = (char *)malloc(sizeof(char) * sum + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);
		strcpy(str + x, av[i]);
		x += length;
		str[x] = '\n';
		x++;
	}
	str[x] = '\0';
	return (str);
}
