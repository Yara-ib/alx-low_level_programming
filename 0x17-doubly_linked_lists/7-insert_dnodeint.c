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
	dlistint_t *ptr = *h, *new_node = malloc(sizeof(dlistint_t));

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
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (idx > 0 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}
	if (idx == 0)
	{
		new_node->prev = ptr->prev;
		new_node->next = ptr;
		if (ptr->prev != NULL)
			ptr->prev->next = new_node;
		ptr->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
