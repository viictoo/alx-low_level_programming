#include "lists.h"

/**
 * A function that frees a list
 * @h: node
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	unsigned int i;
	listint_t *flush;

	if (!*head)
		return (NULL);

	for (i = 0; *head; *head = *head->next, i++, free(flush))
	{
		flush = head;
		free(head->str);
	}
	head = NULL;
	return (i);
}
