#include "lists.h"

/**
 * find_listint_loop - a functin that finds a loop in a linked list
 * @head: node
 * Return: address of where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;


	for (; head; head = head->next)
	{
		for (temp = head->next; temp; temp = temp->next)
		{
			if (temp == head)
				return (temp);
		}
	}
	return (NULL);
}

