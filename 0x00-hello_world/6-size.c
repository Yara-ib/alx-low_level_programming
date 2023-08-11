#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char:%c byte(s)\n", sizeof(char));
	printf("Size of an int:%d byte(s)\n", sizeof(int));
	printf("Size of a long int:%Lf byte(s)\n", sizeof(double));
	printf("Size of a long long int:%lf byte(s)\n", sizeof(float));
	printf("Size of a float:%f byte(s)\n", sizeof(float));
return (0);
}

