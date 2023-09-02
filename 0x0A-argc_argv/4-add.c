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
			char *x = argv[i];
			int n;

			for (n = 0; x[n] != '\0'; n++)
			{
				if (x[n] < '0' || x[n] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(x);
		}
		printf("%d\n", sum);
	}

	return (0);
}
