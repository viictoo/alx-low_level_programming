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
	hare = (*h)->next;

	while (kobe && hare)
	{
		free(kobe);
		kobe = hare;
		hare = hare->next;
		i++;

		if (hare >= kobe)
		{
			free(hare);
			i++;
			break;
		}
	}

	if (kobe)
	{
		free(kobe);
		i++;
	}

	*h = NULL;
	return (i);
}

