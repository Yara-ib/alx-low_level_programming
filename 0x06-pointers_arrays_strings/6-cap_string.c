#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Entry point
 *
 * @str: Parameter for cap_string()
 *
 * Return: Always 0 (Success)
 */

char *cap_string(char *str)
{
	int length = strlen(str);
	int i;

	str[0] = toupper(str[0]);
	for (i = 1; i < length; i++)
	{

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
			{
				str[i + 1] = toupper(str[i + 1]);
			}
	}
	return (str);
}
