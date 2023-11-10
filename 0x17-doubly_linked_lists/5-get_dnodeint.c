#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list.
 * @head: ptr to head
 * @index: index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list || NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head != NULL)
		ptr = head;
	else
		return (NULL);

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
