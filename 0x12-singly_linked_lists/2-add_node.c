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
	char *copy = NULL;

	if (!head)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		return (NULL);
	}

	copy = malloc(strlen(str) + 1);
	if (!copy)
	{
		free(ptr);
		return (NULL);
	}

	strcpy(copy, str);
	ptr->str = copy;
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (!(*head))
	{
		*head = ptr;
		return (ptr);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = ptr;

	return (ptr);
}
