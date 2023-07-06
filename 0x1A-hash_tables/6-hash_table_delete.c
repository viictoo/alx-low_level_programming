#include "hash_tables.h"

/**
 * hash_table_delete - del nodes in hash_table_t ht
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *now, *prev;
	unsigned long int i = 0;

    if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			prev = ht->array[i];
			while (prev)
			{
				now = prev->next;
                if (prev->value)
                    free(prev->key);
                if (prev->value)
                    free(prev->value);
				free(prev);
				prev = now;
			}
		}
	}
	if ((ht->array))
	{
        free(ht->array);
	}
	free(ht);
}
