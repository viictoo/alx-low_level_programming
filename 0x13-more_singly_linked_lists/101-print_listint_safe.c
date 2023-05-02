#include "lists.h"

/**
 * print_listint_safe -  function that prints a listint_t linked list
 * @head: node
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (!head)
		return (0);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		if (head <= head->next)
		{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		exit(98);
		}
		head = head->next;
	}

	return (i);
}

