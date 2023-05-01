#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: node
 * Return: heads node data (n);
 */

int pop_listint(listint_t **head)
{
	int safe;
	listint_t *temp;

	if (!(*head))
		return (0);

	safe = (*head)->n;
	temp = *head;
	*head  = (*head)->next;
	free(temp);
	return (safe);
}
