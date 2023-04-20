#include "variadic_functions.h"

/**
  * print_strings - a function that prints strings followed by a new line
  * @separator:  string to be printed between the strings
  * @n: number of string passed to the function
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int n;
	va_list p;

	if (n == 0)
		return;

	for (i  = 0; i < n; i++)
	{
		va_arg(p, char *);
		if (p)
			printf("%s", p);
		else
			printf("(nil)");
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
