#include "function_pointers.h"

/**
  * int_index - A function that searches for an integer
  * @array: input array
  * @size: number of elements in array
  * @cmp: callback function
  * Return: index of first element for which the cmp fn does not return 0
  *		otherwise -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !cmp || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (0);

}


