#include "search_algos.h"

/**
 * jump_search - searches for value using the Jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located.
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step, idx = 0, prev_step;

	if (!array || !size)
		return (-1);

	step = sqrt(size);
	while (array[idx] < value && idx < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx += step;
	}

	if (idx)
		printf("Value found between indexes [%ld] and [%ld]\n", idx - step, idx);
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", idx, step);
		idx = size;
	}

	prev_step = idx - step;
	while (prev_step <= idx && prev_step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_step, array[prev_step]);
		if (array[prev_step] == value)
			return (prev_step);
		prev_step++;
	}
	return (-1);
}
