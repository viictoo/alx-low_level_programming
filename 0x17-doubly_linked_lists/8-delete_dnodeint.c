#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes nodes
 * @head: node;
 * @index: node position to be removed
 * Return: 1 (exit success) otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *czars, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		czars = *head;
		*head = (*head)->next;
		free(czars);
		return (1);
	}

	temp = *head;
	for (i = 1; temp && i < index; i++, temp = temp->next)
		;
	if (i == index && temp)
	{
		czars = temp->next;
		temp->next = czars->next;

		free(czars);
		return (1);
	}
	return (-1);
}
