#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double ptr to the head
 * @idx: index where new node should be added
 * @n: value to be added to the new node
 * Return: address of the new node || NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr, *next_ptr = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	ptr = *h;

	while (idx > 0 && ptr->next != NULL)
	{
		ptr = ptr->next;
		idx--;
	}

	next_ptr = ptr->next;

	if (next_ptr != NULL)
		next_ptr->prev = new_node;

	new_node->next = next_ptr;
	new_node->prev = ptr;
	ptr->next = new_node;

	return (new_node);
}
