#include "lists.h"

/**
 * free_listint - frees listint_t allocated memory.
 * @head: pointer to the head of the node/list.
 * Return: nothing.
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}

}
