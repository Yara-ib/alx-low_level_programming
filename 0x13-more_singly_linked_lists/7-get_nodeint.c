#include "lists.h"

/**
 * get_nodeint_at_index - gets the value @nth node of a listint_t linked list.
 * @head: pointer to node's head.
 * @index: index of the node, starting at 0.
 * Return: the nth node's value.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (n < index)
	{
		if (ptr == NULL)
			return (NULL);

		ptr = ptr->next;
		n++;
	}
	return (ptr);
}
