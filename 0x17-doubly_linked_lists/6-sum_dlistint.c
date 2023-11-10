#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: ptr to head
 * Return: sum of all the data in all list's nodes
*/

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *ptr;

	if (head != NULL)
		ptr = head;
	else
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
