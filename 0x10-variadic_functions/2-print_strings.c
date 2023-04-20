#include "variadic_functions.h"

/**
  * print_strings - a function that prints strings followed by a new line
  * @separator:  string to be printed between the strings
  * @n: number of string passed to the function
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *arg_type;

	if (n == 0)
		return;

	va_start(p, n);
	for (i  = 0; i < n; i++)
	{
		arg_type = va_arg(p, char *);
		if (arg_type != NULL)
			printf("%s", arg_type);
		else
			printf("(nil)");
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
