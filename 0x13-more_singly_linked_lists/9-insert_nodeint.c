#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to node's head.
 * @idx: index of the list where the new node should be added.
 * @n: position at where the new node should be added.
 * Return: address of the new node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		current = *head;
		for (; i < idx - 1; i++)
		{
			if (current == NULL)
			{
				free(ptr);
				return (NULL);
			}
			current = current->next;
		}
		if (current == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr->next = current->next;
		current->next = ptr;
	}
	return (ptr);
}
