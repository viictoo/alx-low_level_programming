#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: node
 * Returns: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t  *rambo, temp;

	if (*!head)
		return (NULL);


	rambo = NULL;
	while (*head ->next)
	{
		*head = (*head).next;
		(*head).next = rambo;
		rambo = *head;
	}
	return (*head);
}




