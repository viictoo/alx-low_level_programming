#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	if (!head)
		exit(98);

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			fast = head;
			while (fast != slow)
			{
				count++;
				printf("[%p] %d\n", (void *)slow, slow->n);
				fast = fast->next;
				slow = slow->next;
			}

			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (count);
		}
	}

	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	return (count);
}
