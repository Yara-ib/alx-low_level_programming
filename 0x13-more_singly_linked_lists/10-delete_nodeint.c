#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of linked list.
 * @head: pointer to node's head.
 * @index: index of the node that should be deleted.
 * Return: pointer to the first node of the reversed list.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x, *loosed = *head, *ptr = NULL;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		x = *head;
		*head = (*head)->next;
		free(x);
		return (1);
	}

	for (; i < index; i++)
	{
		ptr = loosed;
		loosed = loosed->next;

		if (loosed == NULL)
			return (-1);
	}

	ptr->next = loosed->next;
	free(loosed);
	return (1);
}
