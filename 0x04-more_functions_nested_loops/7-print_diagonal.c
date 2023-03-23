#include "main.h"

/**
  * print_diagonal-A function that prints a diagonal line
  *
  * @n: times \ is printed
  *
  * Return: 0(exit success)
  */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		for (j = 0; j < i; j++)
		_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		}

	}
}
