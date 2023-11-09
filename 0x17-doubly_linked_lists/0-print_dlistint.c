#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
	unsigned int nodes = 0;

	if (h != NULL)
		ptr = h;
	else
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
