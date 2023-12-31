#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the pointer of head.
 * @n: value to be added to data part.
 * Return: address of the new element.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	if (head == NULL)
		ptr = *head;

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
