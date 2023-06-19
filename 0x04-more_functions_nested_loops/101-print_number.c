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
	unsigned int digit = n;

	if (n < 0)
	{
	_putchar('-');
	digit = -n;
	}
	if ((digit / 10) > 0)
		print_number(digit / 10);
	_putchar('0' + (digit % 10));

}

