#include "main.h"

/**
 * leet - Entry point
 *
 * @char: Parameter for leet()
 *
 * Return: Always 0 (Success)
 */

char *leet(char *)
{
	int length = strlen(n);
	int i;

	n[0] = toupper(n[0]);
	for (i = 1; i < length; i++)
	{

		if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n' ||
		n[i] == ',' || n[i] == ';' || n[i] == '.' ||
		n[i] == '!' || n[i] == '?' || n[i] == '"' ||
		n[i] == '(' || n[i] == ')' || n[i] == '{' ||
		n[i] == '}')
		{
			n[i + 1] = toupper(n[i + 1]);
		}
	}
	return (n);
}
