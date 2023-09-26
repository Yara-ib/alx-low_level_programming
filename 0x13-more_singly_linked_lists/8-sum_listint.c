#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to node's head.
 * Return: sum of all the data (n).
*/

int sum_listint(listint_t *head)
{
	unsigned int sum = 0, n = 0;

	for (; head != NULL; n++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
