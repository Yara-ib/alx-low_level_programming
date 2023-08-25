#include "main.h"
#include <string.h>
/**
 * infinite_add - Entry point
 * @n1: Parameter for infinite_add()
 * @n2: Parameter for infinite_add()
 * @size_r: Parameter for infinite_add()
 * @r: Parameter for infinite_add()
 * Return: Always 0 (Success)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i = 0;
	int carry = 0;
	int index = 0;

	while (len1 > 0 || len2 > 0) {
		int digit1 = (len1 > 0) ? (n1[len1 - 1] - '0') : 0;
		int digit2 = (len2 > 0) ? (n2[len2 - 1] - '0') : 0;

		int sum = digit1 + digit2 + carry;

		if (sum > 9) {
			carry = 1;
			sum -= 10;
		} else {
			carry = 0;
		}

		if (index >= size_r) {
			return 0;
		}

		r[index] = sum + '0';

		index++;
		len1--;
		len2--;
	}

	if (carry == 1 && index < size_r) {
		r[index] = '1';
		index++;
	}
	if (index >= size_r) {
		return 0;
	}
	r[index] = '\0';

	int j = index - 1;
	while (i < j) {
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
		i++;
		j--;
	}
	return r;
}
