#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of a list
 * @head: pointer
 * @n: element
 * Return: address pf new element otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *post, *temp;

	post  = malloc(sizeof(dlistint_t));
	if (!post)
		return (NULL);

	post->n = n;
	post->next = NULL;

	if (!(*head))
	{
		post->prev = NULL;
		*head = post;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp  = temp->next;
		temp->next = post;
		post->prev = temp;
	}
	return (post);
}
