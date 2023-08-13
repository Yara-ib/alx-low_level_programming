#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x, y, z;

	for (i = 0; i < 10; ++i)
	{

		for (x = 0; x < 9; ++x)
		{
			for (y = 0; y < 10; ++y)
			{
				for (z = 0; z < 10; ++z)
				{
					if ((i * x) == (y * z))
					{
						continue;
					}
						putchar('0' + i);
						putchar('0' + x);
						putchar(' ');
						putchar('0' + y);
						putchar('0' + z);
						putchar(',');
						putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

