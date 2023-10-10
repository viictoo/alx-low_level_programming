#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
int exponential_search(int *arr, size_t size, int value)
{

	int bound = 1;
	if (size == 0)
		return (-1);

	while (bound < (int)size && arr[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, arr[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", bound/2, 
			bound < (int)size -1 ? bound : (int)size-1);

	printf(" ==bound [%d] and size[%d]\n", bound, (int)size);
	return (bound/2 + binary_search(&arr[bound/2],
				((bound + 1)/2 < (int)size-1 ? (bound + 1)/2 : (int)size-1), value));
}
