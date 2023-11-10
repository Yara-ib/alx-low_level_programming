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

	/* cheking if head exists! if not, new node will be the head */
	if (*h == NULL)
	{
		(*h) = new_node;
		return (new_node);
	}
	else
		ptr = (*h);

	while (ptr != NULL && idx > 0)
	{
		ptr = ptr->next;
		idx--;
	}

	if (idx > 0)
		return (NULL);

	/* checking if the 1st ptr points to the end of the list or not */
	if (ptr == NULL)
	{
		new_node->prev = ptr;
		ptr->next = new_node;
	}
	else
	{
		next_ptr = ptr->next;
		ptr->next = new_node;
		next_ptr->prev = new_node;
		new_node->prev = ptr;
		new_node->next = next_ptr;
	}
	return (new_node);
}
