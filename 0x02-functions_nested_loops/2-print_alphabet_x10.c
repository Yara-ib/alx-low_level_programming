#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i;
	int x;

for (x = 0 ; x <= 10 ; ++x)
{
	for (i = 'a'; i <= 'z'; ++i)
{
	_putchar(i);
}
	_putchar('\n');
}
}

