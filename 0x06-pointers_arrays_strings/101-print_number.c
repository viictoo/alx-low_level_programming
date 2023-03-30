#include "main.h"

/**
  * print_number- A function that prints an integer
  * @n: input integer
  * Return: void
  */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
		n = n;


	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
/*
*	int divisor = 1000000000;
*
*	while (n / divisor == 0)
*	{
*		divisor /= 10;
*	}
*
*	while (divisor > 0)
*	{
*	_putchar(n / divisor + '0');
*	n %= divisor;
*	divisor /= 10;
*/
}

/*rework to use loop*/
