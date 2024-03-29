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
	listint_t *current, *previous = NULL;

	if (!head || !(*head))
		return (-1);

	current = *head;

	for (i = 0; i < index && current; i++)
	{
		previous = current;
		current = current->next;
	}

	if (!current)
		return (-1);

	if (previous)
		previous->next = current->next;
	else
		*head = current->next;

	free(current);
	return (1);
}
