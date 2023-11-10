#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: ptr to head
 * Return: free memory :D
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
}
