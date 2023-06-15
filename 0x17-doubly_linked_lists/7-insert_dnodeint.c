#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head node of a dbly linked list
 * @idx: index of the list where the new node should be added
 * @n: element
 * Return: address of new node otherwise 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prop, *temp;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx && !(*h))
		return (NULL);

	prop = malloc(sizeof(dlistint_t));
	if (!prop)
		return (NULL);

	prop->n = n;
	prop->next = NULL;
	prop->prev = NULL;
	temp = *h;

	if (idx == 0)
	{
		prop->next = *h;
		prop->prev = NULL;
		*h = prop;
		return (prop);
	}

	for (; i < idx - 1 && temp; i++, temp = temp->next)
		;
	if (!temp)
	{
		free(prop);
		return (NULL);
	}

	prop->next = temp->next;
	prop->prev = temp;
	temp->next->prev = prop;
	temp->next = prop;
	return (prop);
}
