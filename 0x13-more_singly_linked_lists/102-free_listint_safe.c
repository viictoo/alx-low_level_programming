#include "lists.h"


/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int i = 0;
	listint_t *kobe, *hare;

	if (!h || !(*h))
		return (0);

	kobe = *h;
	while (kobe)
	{
		hare  = kobe->next;
		free(kobe);
		i++;

		if (hare >= kobe)
		{
			break;
		}
		kobe  = hare;
	}

	*h = NULL;
	return (i);
}

