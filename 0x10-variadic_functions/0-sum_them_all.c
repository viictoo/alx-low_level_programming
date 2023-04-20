#include "variadic_functions.h"

/**
  * sum_them_all - A function that returns the sum of all its parameters
  * @n: number of parameters
  *
  * Return: sum otherwise 0
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list p;

	if (n == 0)
		return (0);

	var_start(p, n);

	for (i  = 0; i < n; i++)
	{
		sum += va_arg(p, int)

	}
	va_end(p);
	return (sum);

}

