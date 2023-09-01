#include "main.h"
#include <stdio.h>

/**
* main - Entry point.
* @argc: Count for arguments.
* @argv: Vector to arguments.
* Return: Always (0); success.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
