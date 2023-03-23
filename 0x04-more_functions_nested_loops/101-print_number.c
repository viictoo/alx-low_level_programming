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
	int digit, i, temp, num_digits;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
}
	if (n == 0)
{
	_putchar('0');

}

	int num_digits = 0;

	while (temp > 0)
{
	temp /= 10;
	num_digits++;
}
	int divisor = 1;

	for (i = 1; i < num_digits; i++)
{
	divisor *= 10;
}
	while (divisor > 0)
{

	int digit = n / divisor;

	_putchar(digit + '0');
	n %= divisor;
	divisor /= 10;
	}
}


