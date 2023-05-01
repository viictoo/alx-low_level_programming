#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: node
 * Return: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t  *rambo, *temp;

	if (!head || !(*head))
		return (NULL);


	rambo = NULL;
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = rambo;
		rambo = *head;
		*head = temp;
	}
	*head = rambo;
	return (*head);
}




