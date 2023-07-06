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
	size_t i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
