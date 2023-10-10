#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_search - a function that searches for a value in an array
 * @array: input list of values to search through
 * @size: number of values on the list
 * @value: integer to search for in the list
 * Return: first index where value is located otherwise -1
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
int binary_search(int *array, size_t size, int value)
{
	int lo = 0, hi = size - 1, mid;

	if (!array)
		return (-1);

	for (; lo <= hi;)
	{
		mid = (lo + hi) / 2;

		printf("mid lo hi %d %d %d: \n", lo, mid, hi);
		printf("Searching in array:");
		sprinter(&array[lo], hi - lo);


		if ( array[mid] < value)
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
int exponential_search(int *arr, size_t size, int value)
{

	int bound = 1;
	if (size == 0)
		return (-1);

	while (bound < (int)size && arr[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, arr[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", bound/2, 
			bound < (int)size -1 ? bound : (int)size-1);

	printf(" ==bound [%d] and size[%d]\n", bound, (int)size);
	return (bound/2 + binary_search(&arr[bound/2],
				((bound + 1)/2 < (int)size-1 ? (bound + 1)/2 : (int)size-1), value));
}
