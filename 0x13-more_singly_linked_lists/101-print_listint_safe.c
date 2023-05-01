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
		exit(98);
	for (; head; head = head->next, i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		if (head <= head->next)
		{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
