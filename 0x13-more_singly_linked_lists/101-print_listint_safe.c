#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: node
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hare = head, *kobe = head;
	size_t i = 0, j = 0, flag = 0;

	if (head == NULL)
		return (0);
	while (kobe && hare && hare->next)
	{
		printf("[%p] %d\n", (void *)kobe, kobe->n);
		i++;
		hare = hare->next->next;
		kobe = kobe->next;
		if (hare == kobe)
		{
			flag = 1;
			break;
		}	}
	if (flag)
	{
		kobe = head;
		for (j = 0; j < i - 1; j++)
		{
			if (hare == kobe)
			{
				printf("-> [%p] %d\n", (void *)hare, hare->n);
				break;
			}
			printf("[%p] %d\n", (void *)hare, hare->n);
			hare = hare->next;
			kobe = kobe->next;
		}
		i = j + 1;	}
	else
	{
		while (kobe)
		{
			printf("[%p] %d\n", (void *)kobe, kobe->n);
			i++;
			kobe = kobe->next;
		}		}
	return (i);	}
