#include "main.h"
#include <stdio.h>

/**
  * print_array-A function that prints n elements of an array of integers
  * @a: mem of intger array
  * @n: no of array elements
  * Return: (void)
  */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", (*(a + x)));

		if (x != n - 1)
			printf(", ");
	}

	_putchar('\n');
}
