#include "lists.h"
/**
  * add_node_end - A a function that adds a new node at the end of a list_t
  * @head: start node
  * @str: string
  * Return: pointer to the new element otherwise NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;

	ptr = *head;
	temp = (list_t *)malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head  = temp;
		return (*head);
	}

	while (ptr != NULL)
	{
		if (ptr->next == NULL)
		{
			ptr->next = temp;
			break;
		}
		ptr = ptr->next;
	}


	return (ptr);

}

