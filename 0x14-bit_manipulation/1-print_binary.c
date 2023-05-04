#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_recursion(n);
}

/**
 * print_recursion - helper function that runs the if condition
 * @n: integer
 *
 * Return: void
 */

void print_recursion(unsigned long int n)
{
	unsigned long int num = 0, remainder = 0;

	if (n != 0)
	{
		num = n;
		n = num >> 1;
		remainder = num - (2 * n);
		print_recursion(n);
		_putchar(remainder + '0');
	}
}
