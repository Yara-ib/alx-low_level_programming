#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to node head.
 * Return: Nothing.
*/
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
