#include <stdio.h>

/**
* main - Entry point.
* @argc: Count for arguments.
* @argv: Vector to arguments.
* Return: Always (0); success.
*/

/**
Write a program that prints all arguments it receives.
All arguments should be printed, including the first one
Only print one argument per line, ending with a new line
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
