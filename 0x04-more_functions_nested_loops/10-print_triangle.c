#include "main.h"

/**
  * print_triangle- A function that prints a triangle
  * followed by a new line
  * @size: is the size of the triangle
  * Return:  (exit size less than/= 0)
  */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			_putchar(' ');
		for (j = size - i; j <= size; j++)
			_putchar('#');
		_putchar('\n');
		}
	}
}
