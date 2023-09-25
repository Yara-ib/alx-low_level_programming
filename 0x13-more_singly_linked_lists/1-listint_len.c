#include "lists.h"

/**
 * listint_len - gets the number of elements of the listint_t list.
 * @h: pointer to the pointer of head.
 * Return: number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
