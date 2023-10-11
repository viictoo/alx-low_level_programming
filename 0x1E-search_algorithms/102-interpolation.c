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
	int key = value;
	size_t pos;

	while (high >= low)
	{
		pos = low + (
			((double)(high - low) / (arr[high] - arr[low])) *
			(value - arr[low]));

		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n",
					pos, arr[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (key == arr[pos])
			return (pos);

		if (key < arr[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
