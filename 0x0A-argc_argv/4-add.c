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
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				return (printf("Error\n"), 1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
