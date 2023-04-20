#include "variadic_functions.h"

/**
  * print_numbers - a function that prints numbers followed by a new line
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	if (n == 0)
		return;
	for (i  = 0; i < n; i++)
	{
		printf("%i", va_arg(p, int));
		if (separator && i != (n - 1))
			printf("%s", separator);

	}
	va_end(p);
	_putchar('\n');
}

