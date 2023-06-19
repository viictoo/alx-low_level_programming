#include "main.h"

/**
  * reverse_array- A funtion that reverses an array of integers
  * @a: input array
  * @n: number of elements is the array
  * Return: 0(exit success)
  */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
