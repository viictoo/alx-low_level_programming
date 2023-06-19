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
	dlistint_t *insert, *prop;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	insert = malloc(sizeof(dlistint_t));
	if (!insert)
		return (NULL);
	insert->n = n;
	insert->prev = NULL;
	insert->next = NULL;
	if (idx == 0)
	{
		if (*h)
		{
			(*h)->prev = insert;
			insert->next = *h;
		}
		*h = insert;
		return (insert);
	}
	prop = *h;
	while (i < idx - 1 && prop)
	{
		prop = prop->next;
		i++;
	}

	if (!prop && i < idx - 1)
	{
		free(insert);
		return (NULL);
	}

	insert->next = prop->next;
	if (prop->next)
		prop->next->prev = insert;
	prop->next = insert;
	insert->prev = prop;
	return (insert);
}
