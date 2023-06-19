#include "main.h"

/**
  * swap_int-A function that swaps the value if 2 integers
  * @a: first swap value
  * @b: second swap value
  * Return: (void)
  */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
