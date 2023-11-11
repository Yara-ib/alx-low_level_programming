#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: double ptr to the head of the DLL
 * @index: index @which the node shall be deleted
 * Return: 1 || -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}

	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
