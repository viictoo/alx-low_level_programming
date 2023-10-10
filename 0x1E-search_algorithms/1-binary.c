#include <stdio.h>

/**
 * sprinter - a function that prints values in an array
 * @array: input list of values to print
 * @size: number of values on the list
 * Return: void
 */

void sprinter(int *array, int size)
{
	int i;

	for (i = 0; i <= size; i++)
	{
		printf(" %d", array[i]);
		if (i != size)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - a function that searches for a value in an array
 * @array: input list of values to search through
 * @size: number of values on the list
 * @value: integer to search for in the list
 * Return: first index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int lo = 0, hi = size - 1, mid;

	if (!array)
		return (-1);

	for (; lo <= hi;)
	{
		mid = (lo + hi) / 2;

		printf("Searching in array:");
		sprinter(&array[lo], hi - lo);


		if (array[mid] < value)
		{
			lo = (mid + 1);
		}
		else if (array[mid] > value)
		{
			hi = (mid - 1);
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
	}
	return (-1);
}
