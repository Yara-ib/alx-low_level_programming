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
 * strtow - concatenates all the arguments of your program.
 * @str: char.
 * Return: pointer to a new string, or NULL if it fails.
*/

char **strtow(char *str)
{
	char **words;
	char *start;
	int n, index, length, word, i;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = count_words(str);

	if (n == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (n + 1));

	if (words == NULL)
		return (NULL);

	index = 0;
	length = 0;
	word = 0;
	char *start = NULL;

	while (*str != '\0')
	{
		if (!is_space(*str))
		{
			if (!word)
			{
				start = str;
				length = 0;
				word = 1;
			}
			length++;
		}
		else
		{
			if (word)
			{
				words[index] = malloc(sizeof(char) * (length + 1));
				if (words[index] == NULL)
				{
					for (i = 0; i < index; i++)
						free(words[i]);
					free(words);
					return (NULL);
				}
				strncpy(words[index], start, length);
				words[index][length] = '\0';
				index++;
				word = 0;
			}
		}
		str++;
	}

	if (word)
	{
		words[index] = malloc(sizeof(char) * (length + 1));
		if (words[index] == NULL)
		{
			for (i = 0; i <= index; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		strncpy(words[index], start, length);
		words[index][length] = '\0';
		index++;
	}
	words[index] = NULL;
	return (words);
}
