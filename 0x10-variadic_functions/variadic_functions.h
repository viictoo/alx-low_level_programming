#ifndef VAR_FN_H
#define VAR_FN_H


#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
  * struct specs - a list of specifiers
  * @specifier: format of print variable
  * @f: function
  */

typedef struct specs
{
	char *specifier;
	void (*f)(va_list);
} spec_s;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void c_spec(va_list p);
void i_spec(va_list p);
void f_spec(va_list p);
void s_spec(va_list p);

#endif
