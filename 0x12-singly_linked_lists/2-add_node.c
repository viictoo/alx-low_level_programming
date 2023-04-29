#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list.
 * @head: start node
 * @str: string
 * Return: pointer to the new element otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *tmp = *head;

	if (!head)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	if (!ptr->str)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->next = tmp;
	*head = ptr;

	return (ptr);
}
