#include "function_pointers.h"

/**
 * array_iterator - fn executes fn as a parameter on each element of an array.
 * @array: pointer to the array.
 * @size: size of array.
 * @action: pointer to void function needed.
 * Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (action == NULL || array[i])
		return;
	for (; i < size; i++)
		action(array[i]);
}
