#include <stdio.h>
#include "search_algos.h"
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
	int i = 0, jump = 0, count = 1;

	if (!array)
		return (-1);

	jump = (squareRoot((int)size));

	for (i = 0; (jump * count) <= (int)size; i += jump, count++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] <= value && array[i + jump] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
					i, i + jump);
			return (linear_search2
					(&array[i],
					 size - (jump * count),
					 value, i));
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
	/*printf("%ld, %d, %d\n", size, rem, i);*/
	return (linear_search2(&array[i], size - i, value, i));
}
