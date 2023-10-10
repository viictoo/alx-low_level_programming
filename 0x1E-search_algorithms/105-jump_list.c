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
	size_t i, jump, loops = 0;

	if (!list || size == 0)
		return (NULL);
	jump = sqrt(size);
	curr = list;
	prev = NULL;
	/* Traverse in blocks -  no efficency whatsoever */
	while (curr->index < size - 1 && curr->n < value)
	{
		prev = curr;
		loops++;
		for (i = 0; i < size; i += jump)
		{
			if (curr->index + 1 == size)
				break;
			curr = curr->next;
		}
		printf("Value checked at index [%ld] = [%d]\n",
						curr->index, curr->n);
	}
	if (!curr && prev->n < value)
		printf("Value checked at index [%ld] = [%ld]\n",
				prev->index, (loops + 1) *jump);

	i = loops * jump;
	printf("Value found between indexes [%ld] and [%ld]\n",
						prev->index,
						i < size - 1 ? i : size - 1);
	while (prev && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
						prev->index, prev->n);
		prev = prev->next;
	}
	if (prev && prev->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
						prev->index, prev->n);
		return (prev);
	}
	else
		return (NULL);
}
