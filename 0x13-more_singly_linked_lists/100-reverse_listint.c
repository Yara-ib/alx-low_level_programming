#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to node's head.
 * Return: pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x, *loosed = *head, *ptr = NULL;
	unsigned int i = 0;

	for (; *head != NULL; i--)
	{
		ptr = (*head)->n;
		(*head) = (*head)->next;
	}
	return (ptr);
}
