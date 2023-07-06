#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 *          value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *setNode;
	size_t i, idx;
	char *val_cpy;

	if (!ht || !key || (*key) == '\0' || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	for (i = idx; ht->array[i]; i++)
	{
		if (!(strcmp(ht->array[i]->key, key)))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_cpy;
			return (1);
		}
	}
	setNode = malloc(sizeof(hash_node_t));
	if (setNode == NULL)
	{
		free(val_cpy);
		return (0);
	}
	setNode->key = strdup(key);
	if (setNode->key == NULL)
	{
		free(setNode);
		return (0);
	}
	setNode->value = val_cpy;
	setNode->next = ht->array[idx];
	ht->array[idx] = setNode;
	return (1);
}
