#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: pointer to node head.
 * @str: starting string.
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	if (head == NULL)
		ptr = ptr->next;

	ptr->n = n;
	ptr->next = NULL;

	return (ptr);


}
