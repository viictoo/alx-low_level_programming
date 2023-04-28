#include "lists.h"

/**
  * print_listint_safe -  function that prints a listint_t linked list
  * @head: node
  * Return: Number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	int i;
	lisint_t *iter;

	for (iter = head, i = 0; iter; iter = iter->next, i++)
	{
		printf("%p %d", iter, iter->n);
	}
	return (i);
}
