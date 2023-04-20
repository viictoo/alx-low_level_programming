#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 * @format: list of types of arguments passed to the funtion
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list p;
	int i, j;
	char *separator = "";
	spec_s spec[] = {
		{"c", c_spec},
		{"i", i_spec},
		{"f", f_spec},
		{"s", s_spec},
		{NULL, NULL}
	};

	va_start(p, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (spec[j].specifier)
		{
			if (format[i] == *spec[j].specifier)
			{
				printf("%s", separator);
				spec[j].f(p);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(p);
	printf("\n");
}

/**
 * c_spec- A function that prints a character
 * @p: parameter
 * Return: void
 */

void c_spec(va_list p)
{
	printf("%c", va_arg(p, int));
}


/**
 * i_spec- A function that prints an integer
 * @p: parameter
 * Return: void
 */

void i_spec(va_list p)
{
	printf("%i", va_arg(p, int));
}

/**
 * f_spec- A function that prints a float
 * @p: parameter
 * Return: void
 */

void f_spec(va_list p)
{
	printf("%f", va_arg(p, double));
}

/**
 * s_spec- A function that prints a string
 * @p: parameter
 * Return: void
 */

void s_spec(va_list p)
{
	char *c;

	c = va_arg(p, char *);
	if (c == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", c);
}
