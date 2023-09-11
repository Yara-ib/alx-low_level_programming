#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _mul - reallocates a memory block using malloc and free.
 * @mul: pointer to the memory previously allocated.
 * @num1: size, in bytes, of the allocated space for ptr.
 * @num2: new size, in bytes of the new memory block.
 * Return: pointer to the newly allocated space.
*/

int isNumber(char *str)
{
	long unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
	}
	return 1;
}

char* multiply(char *num1, char *num2)
{
	int i, j, mul, sum, len, len2, len1;
	char *res, *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len = len1 + len2;
	result = calloc(len, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = result[i + j + 1] + mul;
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	while (len > 0 && result[len - 1] == 0)
		len--;

	res = malloc((len + 1) * sizeof(char));
	for (i = 0; i < len; i++)
		res[i] = result[i] + '0';
	res[len] = '\0';
	free(result);
	return res;
}

int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3 || !isNumber(argv[1]) || !isNumber(argv[2]))
	{
		printf("Error\n");
		return 98;
	}

	num1 = argv[1];
	num2 = argv[2];
	result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);
	return 0;
}
