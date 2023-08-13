#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x, y;

	for (i = 0; i < 8; ++i)
	{

		for (x = i + 1; x < 9; ++x)
		{
			for (y = x + 1; y < 10; ++y)
			{
			putchar('0' + i);
			putchar('0' + x);
			putchar('0' + y);

			if (i == 7 && x == 8)
		{
			break;
		}
		putchar(',');
		putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}

