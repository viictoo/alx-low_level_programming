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
 * advanced_binarys - a recursive function that searches for first occurrence
 *                of a value in a sorted array.
 * @array: input list of values to search through
 * @lo: low index of the subarray
 * @hi: high index of the subarray
 * @value: integer to search for in the list
 * Return: index of the first occurrence of the value, otherwise -1
 */
int advanced_binarys(int *array, int lo, int hi, int value)
{
	if (lo <= hi)
	{
		int mid = lo + (hi - lo) / 2;

		printf("Searching in array:");
		sprinter(&array[lo], hi - lo);

		if (array[mid] > value)
		{
			return (advanced_binarys(array, lo, mid, value));
		}
		else if (array[mid] < value)
		{
			return (advanced_binarys(array, mid + 1, hi, value));
		}
		else if (array[mid] == value && array[mid - 1] == value)
		{
			return (advanced_binarys(array, lo, mid, value));
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
	}
	return (-1);
}
/**
 * advanced_binary - a recursive function that searches for the first occurr
 *                of a value in a sorted array.
 * @array: input list of values to search through
 * @value: integer to search for in the list
 * @size: integer count in the list
 * Return: index of the first occurrence of the value, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binarys(array, 0, (int)(size - 1), value));
}
