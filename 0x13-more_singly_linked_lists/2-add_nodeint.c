#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of a list
 * @head: pointer
 * @n: element
 * Return: address o the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr  = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = head;
	*head = ptr;
	return (ptr);
}
