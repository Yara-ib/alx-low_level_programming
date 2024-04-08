#include "search_algos.h"

/**
 * linear_search - searches for value using the Linear search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0, val = -1;

	if (!array)
		return (-1);

	for (; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			val = idx;
			break;
		}
	}
	return (val);
}
