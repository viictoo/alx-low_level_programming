#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of a list
 * @head: pointer
 * @n: element
 * Return: address pf new element otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *post, *temp;

	post  = malloc(sizeof(listint_t));
	if (!post)
		return (NULL);

	post->n = n;
	post->next = NULL;
	if (!(*head))
	{
		*head = post;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp  = temp->next;
		temp->next = post;
	}
	return (post);
}





