#include "lists.h"

/**
 * dlistint_len - calculate the number of elements in a linked dlistint_t list.
 * @h: pointer to the head
 * Return: number of elements in list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
	unsigned int nodes = 0;

	if (h != NULL)
		ptr = h;
	else
		return (0);

	while (ptr != NULL)
	{
		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
