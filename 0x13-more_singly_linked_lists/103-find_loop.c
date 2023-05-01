#include "lists.h"

/**
 * find_listint_loop - a functin that finds a loop in a linked list
 * @head: node
 * Return: address of where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *kobe, *hare;

	if (!head)
		return (NULL);
	hare = head;
	kobe = head;

	while (hare && kobe && hare->next)
	{
		kobe = kobe->next;
		hare = hare->next->next;
		if (kobe == hare)
		{
			kobe = head;
			while (kobe != hare)
			{
				kobe = kobe->next;
				hare = hare->next;
			}
			return (kobe);
		}
	}
		
	return (NULL);
}

