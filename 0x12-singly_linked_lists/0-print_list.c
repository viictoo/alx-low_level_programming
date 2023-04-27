#include "lists.h"

/**
  * print_list - a function that prints all the elements of a list_t list.
  * @h: start of list
  * Return: number of nodes
  */


size_t print_list(const list_t  *h)
{
	size_t i;
	const list_t *ptr;

	ptr = h;
	i = 0;

	while (ptr != NULL)
	{
		if (!(ptr->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", strlen(ptr->str), ptr->str);
		}
		ptr = ptr->next;
		i++;

	}
	return (i);
}

