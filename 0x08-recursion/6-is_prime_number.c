#include "main.h"

/**
  * prime_calc-A fn that returns 1 if input in a prime number
  * @n: Input integer
  * @x: integer
  * Return: 1 if integer is prime otherwise 0
  */

int prime_calc(int n, int x)
{
	if (n <= 1)
		return (0);
	else if (x == 1)
		return (1);
	else if (n % x == 0)
		return (0);
	return (prime_calc(n, x - 1));
}

/**
  * is_prime_number-A function that determines if no. is prime
  * @n: test integer
  * Return: Integer, 1 if prime otherwise 0
  */


int is_prime_number(int n)
{
	return (prime_calc(n, n / 2));
}

