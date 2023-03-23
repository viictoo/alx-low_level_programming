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

	int digit, divisor = 1;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	while (n / divisor)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n -= digit * divisor;
		divisor /= 10;
	}


	if (n >= 0)
	_putchar(n + '0');

}

