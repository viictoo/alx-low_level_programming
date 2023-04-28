#include "lists.h"

/**
 * sum_listint - returns sum of data in linked list
 * @head: node
 * Return: sum otherwise 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int sum = 0;

	if (!head)
		return (0);
	for (temp = head; temp; temp = temp->next)
		sum += temp->next;

	return (sum);
}
