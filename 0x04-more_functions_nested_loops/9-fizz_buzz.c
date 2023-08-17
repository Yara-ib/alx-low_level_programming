#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 1; x < 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz ");
			x++;
		}
		if (x % 3 == 0)
		{
			printf("Fizz ");
			x++;
		}
		if (x % 5 == 0)
		{
			printf("Buzz ");
			if (x != 100)
			{
				x++;
			}
		}
		if (x == 100)
		{
			break;
		}
		printf("%d ", x);
	}
	printf("\n");
	return (0);
}
