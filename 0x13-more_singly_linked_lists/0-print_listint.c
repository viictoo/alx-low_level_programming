#include "lists.h"

/**
  * print_listint - function that prints all the elements of a listint_t list
  * @h: pointer
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int i;

	if (!h)
		return (NULL);

	while (h)
	{
	printf("%d\n");
	h = h->next;
	i++;
	}
	return (i);
}

