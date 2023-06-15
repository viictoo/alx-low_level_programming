#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a dbly linked list.
  * @h: pointer
  * Return: number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (!h)
		return (0);
	for (i = 0; h; h = h->next, i++)
		;
	return (i);
}
