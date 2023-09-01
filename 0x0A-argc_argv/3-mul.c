#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - Entry point.
* @argc: Count for arguments.
* @argv: Vector to arguments.
* Return: Always (0); success.
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int x, z, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[i + 1]);
	z = atoi(argv[i + 2]);
	m = x * z;

	printf("%d\n", m);
	return (0);
}
