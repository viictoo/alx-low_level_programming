#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @index: index of the node
 * @head: node
 * Return: node otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (!head)
		return (NULL);
	for (i = 0, tmp = head; i < index && tmp->next; i++, tmp = tmp->next)
		;
	if (tmp->next == NULL && i < index)
		return (NULL);
	return (tmp);
}
