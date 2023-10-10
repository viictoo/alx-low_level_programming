#include "search_algos.h"
#include <stdio.h>
/**
  * interpolation_search - search list values using root of size
  * @arr: list of values
  * @size: number of items in list
  * @value: search value
  * Return: index of value otherwise NULL
  */
int interpolation_search(int *arr, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid, key = value;
	size_t pos = low + (
			((double)(high - low) / (arr[high] - arr[low])) *
			(value - arr[low]));

	while ((arr[high] != arr[low])
			&& (key >= arr[low]) && (key <= arr[high]))
	{
		mid = low +
			((key - arr[low]) *
			 (high - low) / (arr[high] - arr[low]));

		if (arr[mid] < key)
		{
			low = mid + 1;
			printf("Value checked array[%d] = [%d]\n",
					mid, arr[mid]);
		}
		else if (key < arr[mid])
		{
			high = mid - 1;
			printf("Value checked array[%d] = [%d]\n",
					mid, arr[mid]);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n",
					mid, arr[mid]);
			return (mid);
		}
	}
	if (key == arr[low])
		return (low);
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
