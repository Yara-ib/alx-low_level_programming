#include "3-calc.h"
#include <stdio.h>
#include <string.h>

int main(int argc, int* argv)
{
	int calc, num1, operator, num2;
	char argv1, argv2;
	int op;

	if (argc != 3)
		return (NULL);

	num1 = atoi(argv1);
	num2 = atoi(argv2);

	if (argc != 3)
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
