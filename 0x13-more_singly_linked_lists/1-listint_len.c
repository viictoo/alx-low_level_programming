#include "lists.h"

/**
  * listint_len - fn returns the number of elements in a linked listint_t list.
  * @h: pointer
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	int i;

	if (!h)
		return (NULL);
	for (i = 0; h; h = h->next, i++)
		;
	return (i);
}
