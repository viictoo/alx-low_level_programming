#include "lists.h"

/**
  * list_len - A function that counts the number of linked list elements
  * @h: node start
  * Return: count
  */

size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *ptr;

	ptr = h;
	i = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

