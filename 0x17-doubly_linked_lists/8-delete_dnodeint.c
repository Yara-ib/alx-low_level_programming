#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: double ptr to the head of the DLL
 * @index: index @which the node shall be deleted
 * Return: 1 || -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp2 = NULL, *temp3 = NULL, *temp = *head;

	if ((*head) == NULL || head == NULL)
		return (-1);

	if (index == 0) /* it's the first node then */
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		temp = NULL;
		return (1);
	}
	if (temp->next == NULL && index > 0) /* It's the last node */
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp2 = temp->prev;
		temp2->next = NULL;
		free(temp);
		return (1);
	}
	/* just any position */
	if (temp->next != NULL && index > 0)
	{
		while (temp->next != NULL && index > 0)
		{
			temp = temp->next;
			index--;
		}
		temp2 = temp->prev;
		temp3 = temp->next;
		temp2->next = temp3;
		temp3->prev = temp2;

		free(temp);
		return (1);
	}
	return (-1);
}
