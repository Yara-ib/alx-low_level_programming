#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x, y, z, m, n;

	for (i = 0; i < 100; ++i)
	{
		m = i / 10;
		n = i % 10;
		for (x = i + 1; x < 100; ++x)
		{
			y = x / 10;
			z = x % 10;
			putchar('0' + m);
			putchar('0' + n);
			putchar(' ');
			putchar('0' + y);
			putchar('0' + z);
			if (m == 9 && n == 8 && y == 9 && z == 9)
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

