#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: Parameter for _strlen()
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int x;
	int len = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		len++;
	}
	return (len);
}
