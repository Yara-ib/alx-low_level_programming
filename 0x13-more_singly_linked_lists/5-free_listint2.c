#include "lists.h"

/**
 * free_listint2 - frees list & set head to NULL
 * @head: pointer to the head of the node.
 * Return: nothing, freed memory.
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
