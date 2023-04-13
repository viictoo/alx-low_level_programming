#include "main.h"

/**
 * array_range-A function that creates an array of integers
 * @min: start value in the array
 * @max: end value in array
 * Return: pointer to the newly created array otherwise NULL
 */

int *array_range(int min, int max)
{
	unsigned int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = (max - min + 1);

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}

