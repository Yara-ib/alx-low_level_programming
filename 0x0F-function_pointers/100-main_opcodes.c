#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: count of arguments.
 * @argv: vector to agruments' array.
 * Return: Always (0) - success.
*/

int main(int argc, char *argv[])
{
	int i, n;
	unsigned char *x;

	if (argc != 2 && argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	x = *argv;
	if (argc == 2)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%.2x ", x[i]);
			if (i == (n - 1))
			{
				printf("%.2x", x[i]);
			}
		}
	}
	printf("\n");
	return (0);
}
