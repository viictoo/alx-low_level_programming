#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: get key
 * Return: value at key otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t idx = 0;
	hash_node_t *ptr;

	if (!ht)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[idx];

	while (ptr)
	{
		if ((strcmp(ptr->key, key) == 0))
			return (ptr->value);
		ptr = ptr->next;
	}
	if (!ptr)
		return (NULL);
	return (NULL);
}
