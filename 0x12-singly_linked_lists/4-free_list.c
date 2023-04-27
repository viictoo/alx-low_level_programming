#include "lists.h"

/**
 * free_list - A a function that frees a list_t list
 * @head: start of linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr, *temp;

	if (head == NULL)
	{
		return;
	}


	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;

		if (temp->str)
		{
			free(temp->str);
		}
		free(temp);
	}

	free(head);
}

