#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: count of arguments.
 * @argv: vector to agruments' array.
 * Return: Always (0) - success.
*/
int main(int argc, int* argv[])
{
	int num1, num2;
    int (*op)(int, int);

	num1 = atoi(argv[1]);
	op = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        printf("Error\n");
        return (100);
    }

	printf("%d\n", op(num1, num2));
	return (0);
}
