#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x;

	for (i = 0; i < 10; ++i)
	{

		for (x = i + 1; x < 10; ++x)
		{
		putchar('0' + i);
		putchar('0' + x);

			if (i == 8 && x == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}

