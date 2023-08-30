#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0) (success)
 */

int main(void)
{
	int i, fib_sequence;

	if (n <= 0)
	{
		return;
	}

	fib_sequence[50];
	fib_sequence[0] = 1;
	fib_sequence[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib_sequence[i] = fib_sequence[i - 1] + fib_sequence[i - 2];
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", fib_sequence[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
return (0);
}
