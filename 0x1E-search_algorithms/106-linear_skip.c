#include "search_algos.h"
#include <math.h>

/**
  * linear_skip -  a fn that searches for values in a skip list
  * @list: a single layer skip list
  * @value: value to search for
  * Return: index if value in list otherwise NULL
  */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *prev = NULL;

	if (!list)
		return (NULL);
	curr = list;
	while (curr->express && curr->n < value)
	{
		prev = curr;
		curr = curr->express;
		printf("Value checked at index [%ld] = [%d]\n",
				curr->index, curr->n);
		if (curr->n == value)
			return (curr);
	}
	if (!curr->express && curr->n < value)
	{
		prev = curr;
		while (curr->next)
			curr = curr->next;
		printf("Value found between indexes [%ld] and [%ld]\n",
				prev->index, curr->index);
	}
	else  if (curr)
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
				prev->index, curr->index);
	}
	while (prev && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				prev->index, prev->n);

		prev = prev->next;	}
	if (prev && prev->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				prev->index, prev->n);
		return (prev);	}
	else
		return (NULL);
}
