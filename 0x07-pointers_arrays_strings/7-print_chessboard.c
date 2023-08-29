#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  Searches a string for any of a set of bytes
 *
 * @a: Parameter for print_chessboard()
 *
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int x, i;

	for (x = 0; x < 8; x++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[x][i]);
		}
		_putchar('\n');
	}
}
