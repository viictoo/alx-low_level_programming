#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sprinter -  a function that prints values in a array
 * @array: input list of values
 * @size: integer count of values in array
 * Return: (void)
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
 * binary_search - a recursive function that searches for the first occurrence
 *                of a value in a sorted array.
 * @array: input list of values to search through
 * @lo: low index of the subarray
 * @hi: high index of the subarray
 * @value: integer to search for in the list
 * Return: index of the first occurrence of the value, otherwise -1
 */
int binary_search(int *array, int lo, int hi, int value)
{
	if (lo <= hi)
	{
		int mid = lo + (hi - lo) / 2;

		printf("mid lo hi %d %d %d: \n", lo, mid, hi);
		printf("Searching in array:");
		sprinter(&array[lo], hi - lo);

		if (array[mid] == value)
		{
			if (mid == lo || array[mid - 1] != value)
				return (mid);
			else
				return (binary_search(array, lo, mid - 1, value));
		}
		else if (array[mid] < value)
		{
			return (binary_search(array, mid + 1, hi, value));
		}
		else
		{
			return (binary_search(array, lo, mid - 1, value));
		}
	}
	return (-1);
}

