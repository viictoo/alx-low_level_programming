#include "lists.h"

/**
  * add_node - a function that adds a new node at the beginning of a list.
  * @head: start node
  * @str: string
  * Return: pointer to the new element otherwise NULL
  */

list_t *add_node(list_t **head, const char *str)
{

	list_t *tmp;
	list_t *ptr = NULL;
	char *copy;

	if (!head)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		return (NULL);
	}
	copy = malloc(sizeof(strlen(str) + 1));
	if (copy == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcopy(copy, str);
	ptr->str = copy;
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (!(*head))
	{
		*head  = ptr;
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;

	return (ptr);

}

