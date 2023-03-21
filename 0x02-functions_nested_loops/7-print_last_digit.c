#include "main.h"

/**
 * print_last_digit -prints last digit of a number
 *
 * @n: input argument variable
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n % 10);
	_putchar(last_digit + '0');

	return (last_digit);
}
