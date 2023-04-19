#include "function_pointers.h"

/**
  * array_iterator- A function that executes a function given as a parameter
  *			on each element of an array
  * @array: input array
  * @size: number of array elements
  * @action: callback function
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
