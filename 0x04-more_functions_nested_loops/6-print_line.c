#include "main.h"

/**
  * print_line- A program that prints a straight line in the terminal
  *
  *@n: loop times _ is printed
  * Return: 0( exit success)
  */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}

	return (0);
}
