#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nodes
 * @head: node;
 * @index: node position to be removed
 * Return: 1 (exit success) otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *czars, *temp;

	for (i = 0, czars = *head; czars; i++, czars = czars->next)
	{
		if (i == n)
		{
			temp = czars->next;
			free(czars);
			return (1);
		}
		temp = czars;
	}
	return (-1);
}
