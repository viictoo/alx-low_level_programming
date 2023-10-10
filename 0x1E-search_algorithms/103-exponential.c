#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * sprinter -  a function that prints array values
  * @array: list of values
  * @size: number of values in array
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
 * binary_searche - a function that searches for a value in a subarray
 * @array: input list of values to search through
 * @lo: low index of the subarray
 * @hi: high index of the subarray
 * @value: integer to search for in the list
 * Return: first index where value is located otherwise -1
 */
int binary_searche(int *array, int lo, int hi, int value)
{
	int mid;

	while (lo <= hi)
	{
		mid = lo + (hi - lo) / 2;

		printf("Searching in array:");
		sprinter(&array[lo], hi - lo);

		if (array[mid] < value)
		{
			lo = mid + 1;
		}
		else if (array[mid] > value)
		{
			hi = mid - 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
	}
	return (-1);
}

/**
 * exponential_search - a function that searches for a value in an array
 * @arr: input list of values to search through
 * @size: number of values on the list
 * @value: integer to search for in the list
 * Return: index where value is located otherwise -1
 */
int exponential_search(int *arr, size_t size, int value)
{
	int bound = 1, hi, result;

	if (size == 0)
		return (-1);

	while (bound < (int)size && arr[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, arr[bound]);
		bound *= 2;
	}

	hi = (bound < (int)size - 1) ? bound : (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", bound / 2, hi);
	result = binary_searche(arr, bound / 2, hi, value);

	return (result);
}

