#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dbly linked list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
