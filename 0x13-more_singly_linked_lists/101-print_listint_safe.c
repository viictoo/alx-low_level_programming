#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: node
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *kobe = head, *fast = head;
	size_t count = 0;

	if (!head)
		return (0);
	while (kobe)
	{
		if (!fast || !(fast->next))
			break;
		printf("[%p] %d\n", (void *)kobe, kobe->n);
		count++;
		kobe = kobe->next;
		fast = fast->next->next;
		if (kobe == fast)
		{
			kobe = head;
			while (kobe)
			{
				printf("[%p] %d\n", (void *)fast, fast->n);
				kobe = kobe->next;
				fast = fast->next;
				count++;
				if (kobe == fast)
				{
				printf("-> [%p] %d\n", (void *)fast, fast->n);
				return (count);
				}
				if (!fast || !fast->next)
					break;
			}	}
		if (!kobe)
			exit(98);
	}
	while (kobe)
	{
		printf("[%p] %d\n", (void *)kobe, kobe->n);
		count++;
		kobe = kobe->next;	}
	return (count);
}
