#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - checks if it's digit or not.
 * @num: Parameter for _isdigit()
 * Return: Always 0 (Success)
 */

int _isdigit(long num)
{
	if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}

/**
 * mul - multiplies two positive numbers.
 * @num1: Parameter for mul()
 * @num2: Parameter for mul()
 * Return: Always 0 (Success)
 */

int mul(long num1, long num2)
{
	return (num1 * num2);
}

/**
* main - Entry point.
* @argc: Count for arguments.
* @argv: Vector to arguments.
* Return: Always (0); success.
*/

int main(int argc, char *argv[])
{
	long num1, num2, i, j;

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit((long)(argv[i][j])))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	printf("%d\n", mul(num1, num2));
	return (0);
}
