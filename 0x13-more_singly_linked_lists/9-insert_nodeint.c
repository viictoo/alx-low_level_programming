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
	listint_t *prop, *temp, *swap;
	unsigned int i;

	prop = malloc(sizeof(listint_t));
	if (!prop)
		return (NULL);
	prop->n = n;

	for (temp = *head, i = 0; temp; i++, temp = temp->next)
	{
		if (i == n)
		{
			swap = temp->next;
			temp->next = prop;
			prop->next = swap;
			return (prop);
		}
	}
	return (NULL);

}
