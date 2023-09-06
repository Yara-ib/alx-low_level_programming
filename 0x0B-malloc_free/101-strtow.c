#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * is_space - spaces check.
 * @c: char.
 * Return: spaces.
*/

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - words count.
 * @str: char.
 * Return: count of words.
*/

int count_words(char *str)
{
	int count, word;

	count = word = 0;

	while (*str != '\0')
	{
		if (!is_space(*str))
		{
			if (!word)
			{
				word = 1;
				count++;
			}
		}
		else
			word = 0;
		str++;
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: char.
 * Return: pointer to an array of strings (words).
*/

char **strtow(char *str)
{
	char **words, *start;
	int n, x, length, word;

	x = length = word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = count_words(str);
	if (n == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (n + 1));
	if (words == NULL)
		return (NULL);

	start = NULL;

	while (*str != '\0')
	{
		if (!is_space(*str))
		{
			if (!word)
			{
				start = str;
				word = 1;
			}
			length++;
		}
		else
		{
			if (word)
			{
				words[x] = strndup(start, length);
				x++;
				word = length = 0;
			}
		}
		str++;
	}
	if (word)
	{
		words[x] = strndup(start, length);
		x++;
	}
	words[x] = NULL;
	return (words);
}
