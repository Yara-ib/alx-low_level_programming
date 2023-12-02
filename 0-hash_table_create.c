#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: pointer to the newly created hash table || NULL.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = NULL;

	ptr = malloc(sizeof(hash_table_t) * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
