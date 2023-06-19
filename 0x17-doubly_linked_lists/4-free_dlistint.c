#include "lists.h"

/**
 * free_dlistint - frees a listint_t
 * @head: pointer
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *flush;

	for (; head; head = head->next, free(flush))
		flush = head;
}
