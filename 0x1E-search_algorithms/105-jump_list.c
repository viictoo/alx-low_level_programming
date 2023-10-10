#include "search_algos.h"
#include <math.h>
/**
  * jump_list - function that searches for values in a list
  * @list: input list
  * @size: number of list elements
  * @value: input value
  * Return: pos of value in list otherwise NULL
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{

	listint_t *curr, *prev;
	size_t i = 0, jump = 0, loops = 0;

	if (!list || size == 0)
		return (NULL);
	jump = sqrt(size);
	curr = list;
	prev = NULL;
	/* Traverse in blocks -  no efficency whatsoever */
	while (curr->index + 1 < size && curr->n < value)
	{
		prev = curr;
		loops++;
		for (i += jump; i > curr->index; curr = curr->next)
		{
			if (curr->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
						curr->index, curr->n);
	}
	i = loops * jump;
	printf("Value found between indexes [%ld] and [%ld]\n",
						prev->index, curr->index);
	while (prev->index < curr->index && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
						prev->index, prev->n);
		prev = prev->next;
	}
	printf("Value checked at index [%ld] = [%d]\n",
			prev->index, prev->n);

	if (prev->n == value)
		return (prev);

	else
		return (NULL);
}
