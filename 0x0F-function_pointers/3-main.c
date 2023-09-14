#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 * @argc: count of arguments.
 * @argv: vector to agruments' array.
 * Return: Always (0) - success.
*/
int main(int argc, int* argv[])
{
	int calc, num1, operator, num2;
	int op;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op != "+" || op != "-" || op != "*" || op != "/" || op != "%" || op != NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num1 / num2 && num2 == 0 || num1 % num2 && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (calc);
}
