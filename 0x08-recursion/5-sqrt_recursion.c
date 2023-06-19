#include "main.h"

/**
  * sqrt_calc-A function that returns natural square root of a number
  * @n: number to square root, integer
  * @i: integer
  * Return: square root or 0 if n=0 and -1 if n<0
  */

int sqrt_calc(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sqrt_calc(n, i + 1));
	else
		return (-1);
}

/**
  * _sqrt_recursion-A function that returns natural sq root of a number
  * @n: Integer to find sq root of
  * Return: 0, -1 or square root i
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (sqrt_calc(n, 1));
}
