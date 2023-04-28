#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: node
 * Return: heads node data (n);
 */

pop_listint(listint_t **head)
{
	int safe;
	listint_t *temp;

	safe = head->n;
	temp = *head;
	*head  = (*head)->next;
	free(temp);
	return (safe);
}
