#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	size_t i = 0;
	char *sep = "";

	if (!ht || !ht->array)
		return;

	printf("{");
	while (i < ht->size)
	{
		temp = ((ht->array)[i]);
		while (temp)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
