#include "main.h"

/**
  * factorial-A function that returns the factorial of a number
  * @n: number to factorise
  * Return: factorial as an integer
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n * factorial(n - 1));
}
