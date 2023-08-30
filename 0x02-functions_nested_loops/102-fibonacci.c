#include "main.h"
#include <stdio.h>
/**
 * print_fib - Another Entry - another Function
 * @n: Parameter for print_fib
 * Return: Always (0) (success)
 */

void print_fib(int n)
{
	int i, fib;

	if (n <= 0)
	{
		return;
	}

	fib[50];
	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", fib[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point
 * Return: Always (0) (success)
 */

int main(void)
{
	print_fib(50);
	return (0);
}
