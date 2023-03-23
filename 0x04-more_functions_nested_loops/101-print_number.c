#include "main.h"

/**
  * print_number- A function that prints an integer
  *
  * @n: integer
  *
  * Return: 0(exit successfully)
  */

void print_number(int n)
{
	if (n < 0)
	_putchar('-');
	n = -n;

	if (n / 10)
	{
	print_number(n / 10);
	}
	_putchar(n % 10 + '0');

}

