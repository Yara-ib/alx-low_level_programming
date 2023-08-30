#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (0) (success)
 */

int main(void)
{
	int next;
	int limit = 4000000;
	int prev = 1;
	int curr = 2;
	int sum = 0;

	while (curr <= limit)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}

		next = prev + curr;
		prev = curr;
		curr = next;
	}
	printf("%d\n", sum);
	return (0);
}
