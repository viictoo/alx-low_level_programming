#include "main.h"

/**
  * print_triangle- A function that prints a triangle
  * followed by a new line
  * @size: is the size of the triangle
  * Return: 0 (exit status success)
  */

void print_triangle(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
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
	return (0);
}
