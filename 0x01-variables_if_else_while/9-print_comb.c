#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	while (i < 9)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		++i;
	}
	putchar('0' + 9);
	return (0);
}

