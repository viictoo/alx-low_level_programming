#include "main.h"

/**
  * print_diagsums-A function that prints sum of cross diagonals in a square
  * matrix of integers
  * @a: integer matrix
  * @size: size of matrix
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sumA = 0, sumV = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		sumV += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		sumA += a[i];
	}
	printf("%d, %d\n", sumV, sumA);
}

