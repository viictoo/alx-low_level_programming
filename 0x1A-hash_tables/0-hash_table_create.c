#include "hash_tables.h"

/**
 * hash_table_create- a function that creates a hash table
 * @size:  is the size of the array
 * Return: a pointer to the newly created hash table
 *      otherwise: If something went wrong, returns NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **arr = NULL;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	arr = malloc(sizeof(*arr) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arr[i] = NULL;
	table->array = arr;

	return (table);
}
