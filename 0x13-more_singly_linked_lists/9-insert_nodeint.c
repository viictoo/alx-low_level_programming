#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: node
 * @idx: index of the list where the new node should be added
 * @n: element
 * Return: address of new node otherwise 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prop, *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	if (idx && !(*head))
		return (NULL);

	prop = malloc(sizeof(listint_t));
	if (!prop)
		return (NULL);

	prop->n = n;
	prop->next = NULL;
	temp = *head;

	if (idx == 0)
	{
		prop->next = *head;
		*head = prop;
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
	temp->next = prop;
	return (prop);
}
