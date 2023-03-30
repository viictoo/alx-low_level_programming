#include "main.h"

/**
  * print_number- A function that prints an integer
  * @n: input integer
  * Return: void
  */

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
/*
 *	if (n >= 10)
 *	{
 *		print_number(n / 10);
 *	}
 *	_putchar(n % 10 + '0');
**/
	int digit, divisor = 1;

	while (i / divisor >= 10)
	{
	divisor *= 10;
	}
	while (divisor > 0)
	{
	digit = i / divisor;
	_putchar(digit + '0');
	i %= divisor;
	divisor /= 10;
	}
}

/*rework to use loop*/
