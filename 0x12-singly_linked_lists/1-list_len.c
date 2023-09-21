#include "lists.h"

/**
 * list_len - get number of elements in a linked list_t list.
 * @h: pointer to the starting node.
 * Return: returns the number of elements.
 *
*/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (0);
		h = h->next;
		i++;
	}
	return (i);
}
