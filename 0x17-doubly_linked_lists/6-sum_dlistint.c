#include "lists.h"

/**
 * sum_dlistint - returns sum of data in linked list
 * @head: node
 * Return: sum otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	for (temp = head; temp; temp = temp->next)
		sum += temp->n;

	return (sum);
}
