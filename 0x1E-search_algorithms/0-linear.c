#include <stdio.h>

/**
 * linear_search - a function that searches for a value in an array
 * @array: input list of values to search through
 * @size: number of values on the list
 * @value: integer to search for in the list
 * Return: first index where value is located otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			/* printf("Found %d at index: %d\n", value, i);*/
			return (i);
		}
	}
	/* printf("Found %d at index: -1", value);*/
	return (-1);
}
