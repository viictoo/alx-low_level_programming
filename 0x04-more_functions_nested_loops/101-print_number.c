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

	int num, div = 1;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	while (n / div || n < 0)
	{
		num = n / div;
		_putchar(num % 10 + '0');
		n -= num * div;
		div /= 10;
	}


	if (n >= 0)
	_putchar(n + '0');

}

