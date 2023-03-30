#include "main.h"

/**
  * print_number- A function that prints an integer
  * @n: input integer
  * Return: void
  */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
/*
 *	if (n >= 10)
 *	{
 *		print_number(n / 10);
 *	}
 *	_putchar(n % 10 + '0');
**/
	int digit, divisor = 1;

	while (n / divisor >= 10)
	{
	divisor *= 10;
	}
	while (divisor > 0)
	{
	digit = n / divisor;
	_putchar(digit + '0');
	n %= divisor;
	divisor /= 10;
	}
	}
}
/*rework to use loop*/
