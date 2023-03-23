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
	while (n / div)
	{
		num = n / div;
		_putchar(num + '0');
		n -= num * div;
		divisor /= 10;
	}


	if (n >= 0)
	_putchar(n % 10 + '0');

}

