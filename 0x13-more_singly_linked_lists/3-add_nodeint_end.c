#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: pointer to node head.
 * @n: value to be added to the data part.
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *now, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		now = *head;
		while (now->next != NULL)
			now = now->next;
		now->next = new;
	}

	return (new);
}
