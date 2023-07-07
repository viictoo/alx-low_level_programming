#include "hash_tables.h"
/**
 * shash_table_create- a function that creates a soreted hash table
 * @size:  is the size of the array
 * Return: a pointer to the newly created hash table
 *      otherwise: If something went wrong, returns NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}


/**
 * shash_table_set - a function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 *          value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	size_t i, idx;

	if (!ht || !key || (*key) == '\0' || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	for (i = idx; ht->array[i]; i++)
	{
		if (!(strcmp(ht->array[i]->key, key)))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			if (!ht->array[i]->value)
				return (0);
			return (1);
		}
	}

	return (create_snode(ht, key, value, idx));
}

/**
 * create_snode - a function that adds an node to linked list
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 *          value must be duplicated. value can be an empty string
 *@idx: position of the index
 * Return: 1 if it succeeded, 0 otherwise
 */
int create_snode(shash_table_t *ht, const char *key,
const char *value, size_t idx)
{
	shash_node_t *setNode, *current;
	char *val_cpy;

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	setNode = malloc(sizeof(shash_node_t));
	if (setNode == NULL)
	{
		free(val_cpy);
		return (0);
	}

	setNode->key = strdup(key);
	if (setNode->key == NULL)
	{
		free(val_cpy);
		free(setNode);
		return (0);
	}

	setNode->value = val_cpy;
	setNode->next = NULL;

	if (ht->array[idx] == NULL)
		ht->array[idx] = setNode;
	else
	{
		for (current = ht->array[idx]; current->next; current = current->next)
			;
		current->next = setNode;
	}

	sort_list(ht, setNode);

	return (1);
}
/**
 * sort_list - a function that sort/inserts a node to a linked list
 * @ht: is the hash table you want to add or update the key/value to
 * @newNode: node to insert in sorted list
 * Return: 1 if it succeeded, 0 otherwise
 */
void sort_list(shash_table_t *ht, shash_node_t *newNode)
{
	shash_node_t *current = ht->shead, *prev = NULL;

	while (current && strcmp(current->key, newNode->key) < 0)
	{
		prev = current;
		current = current->snext;
	}

	newNode->snext = current;
	newNode->sprev = prev;

	if (current != NULL)
		current->sprev = newNode;
	else
		ht->stail = newNode;

	if (prev != NULL)
		prev->snext = newNode;
	else
		ht->shead = newNode;
}

/**
 * shash_table_print - print key/values of hash table in order
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *sep = "";

	if (!ht || !ht->shead)
		return;

	printf("{");
	temp = ht->shead;
	while (temp)
	{
		printf("%s'%s': '%s'", sep, temp->key, temp->value);
		sep = ", ";
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print key/values of hash table in order
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *sep = "";

	if (!ht || !ht->shead)
		return;

	printf("{");
	temp = ht->stail;
	while (temp)
	{
		printf("%s'%s': '%s'", sep, temp->key, temp->value);
		sep = ", ";
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - del nodes in hash_table_t ht
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *next, *list_node;
	size_t i = 0;

	if (!(ht->array))
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			list_node = ht->array[i];
			while (list_node)
			{
				next = list_node->next;
				free(list_node->key);
				free(list_node->value);
				free(list_node);
				list_node = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
