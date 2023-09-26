#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the head node.
 * Return: head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int r;

	if (*head == NULL || head == NULL)
		return (0);

	ptr = *head;
	r = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (r);
}
