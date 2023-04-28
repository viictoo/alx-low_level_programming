#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *flush;

	for (; head; head = head->next, free(flush))
		flush = head;
}
