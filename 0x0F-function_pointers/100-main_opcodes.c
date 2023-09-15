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
	int i, n = 0;

	n = atoi(argv[1]);
	if (argc == 2)
		printf("%.2x\n", n);
	else
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1] < 0)
		printf("Error\n");
		exit(2);
	return (0);
}
