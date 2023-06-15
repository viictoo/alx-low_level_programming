#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of a list
 * @head: pointer
 * @n: element
 * Return: address o the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr  = malloc(sizeof(dlistint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;

	*head = ptr;
	return (ptr);
}
