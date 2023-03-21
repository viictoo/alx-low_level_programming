#include "main.h"

/**
 * print_fibonacci - prints the first 98 Fibonacci numbers
 *
 * Return: void
 *
 **/


void print_fibonacci(void)

{
	unsigned long int fibb1 = 1, fibbnow = 2, result;

	int i;

	_putchar('1');
	_putchar(',');
	_putchar(' ');
	_putchar('2');
	_putchar(',');
	_putchar(' ');


	for (i = 3; i <= 98; i++)

	{
		result = fibb1 + fibbnow;
		fibb1 = fibbnow;
		fibbnow = result;

		if (result > 99999999999999999)

/*
 * check for overflow
 */

		{
			fibb1 /= 10;
			fibbnow /= 10;
			result /= 10;
		}

		print_number(result);

		if (i != 98)
		{
	_putchar(',');
	_putchar(' ');
		}
	}

	_putchar('\n');

}

/**
 * print_number - prints a number
 *
 * @n: output number
 *
 * Return: void
 *
 */

void print_number(unsigned long int n)
{

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
