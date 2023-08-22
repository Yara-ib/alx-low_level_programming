#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, s;
	char p[58];
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			p[i] = c[j];
			s += c[j];
			i++;
		}
		while (c[k])
		{
			if (c[k] == (2772 - s))
			{
				p[i] = c[k];
				s += c[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
