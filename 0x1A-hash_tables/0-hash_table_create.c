#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: pointer to the newly created hash table || NULL.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i = 0;

	/* Assigning memory for the Hash Table (overall) */
	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
	{
		return (NULL);
	}

	/* Assigning values of hash_table_t's members */
	h_table->size = size;
	/* Array; double ptr points to the array & each node to be created.*/
	h_table->array = malloc(size * sizeof(hash_node_t));
	if (h_table->array == NULL)
	{
		free(h_table->array);
		return (NULL);
	}

	/* Assigning values for @each of the array indices */
	for (; i < size; i++)
	{
		h_table->array[i] = NULL;
	}
	return (h_table);
}
