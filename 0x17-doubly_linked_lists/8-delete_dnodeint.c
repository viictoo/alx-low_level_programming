#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes idexed node of a dbly linked list
 * @head: pointer to the head of the doubly linked list
 * @index: node index position to delete
 * Return: 1 (exit success), otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *czars, *hold;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		hold = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(hold);
		return (1);
	}
	czars = *head;
	for (i = 0; czars && i < index; i++)
	{
		hold = czars;
		czars = czars->next;
	}
	if (czars == NULL)
		return (-1);

	hold->next = czars->next;
	if (czars->next != NULL)
		czars->next->prev = hold;
	free(czars);

	return (1);
}
