#include <stdio.h>
#include "search_algos.h"
#include <math.h>
/**
 * squareRoot - get the square root using improv Newtons squareroot method
 * for complexity reasons
 * @n: number to get the root of
 * Return: integer, square root
 */
int squareRoot(int n)
{

	float accuracy = 0.00001;
	int x = n, root, count = 0;

	for (;;)
	{
		count++;
		root = 0.5 * (x + (n / x));

		if ((-1) * (float)(root - x) < accuracy)
			break;

		x = root;
	}
	return (root);
}

/**
 * linear_search2 - a function that searches for a value in an array
 * @array: input list of values to search through
 * @size: number of values on the list
 * @value: integer to search for in the list
 * @index: position on the list
 * Return: first index where value is located otherwise -1
 */

int linear_search2(int *array, size_t size, int value, int index)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n",
				i + index, array[i]);
		if (array[i] == value)
			return (i + index);
	}
	return (-1);
}
/**
 * jump_search - a function that searches for a value in an array
 * @array: input list of values to search through
 * @size: number of values on the list
 * @value: integer to search for in the list
 * Return: first index where value is located otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = 0, count = 1;

	if (!array || size == 0)
		return (-1);

	jump = (sqrt(size));

	for (i = 0; i < size && array[i] < value; count = i, i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", count, i);
	return (linear_search2(array + i - jump, size - (
					i - jump), value, i - jump));
}
