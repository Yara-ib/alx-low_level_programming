#include "main.h"

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print.
 * Return: character printed to the stdout.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - writes the str to stdout.
 * @str: string to be passed on.
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

/**
 * _atoi - converts the string to an integer.
 * @s: character to be converted.
 * Return: integer representation for the character.
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int z = 0;

	do {
		if (*s == '-')
			x *= -1;
		else if (*s >= '0' && *s <= '9')
			z = (z * 10) + (*s - '0');
		else if (z > 0)
			break;
	} while (*s++);
	return (x * z);
}

/**
 * _strlen - get the length of a string.
 * @s: string to get length for.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int x;
	int len = 0;

	for (x = 0; s[x] != '\0'; x++)
		len++;
	return (len);
}

/**
 * _abs - gets the absolute value of an integer.
 * @x: integer to be evaluated.
 * Return: absolute value of an integer.
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
