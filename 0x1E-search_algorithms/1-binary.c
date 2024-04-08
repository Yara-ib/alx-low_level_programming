#include "search_algos.h"

/**
 * binary_search - searches for value using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right, idx;

	if (!array)
		return (-1);

	right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (idx = left; idx < right + 1; idx++)
		{
			printf("%d", array[idx]);
			if (idx != right)
				printf(", ");
		}
		printf("\n");
		size = size / 2;

		if (value > array[mid])
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
