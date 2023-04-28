#include "lists.h"

/**
 * free_listint2 - a fn that frees listint_t list
 * @head: pointer;
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *flush, *temp;


	for (temp = *head, head = NULL; temp; temp = temp->next, free(flush))
		flush = temp;
}

