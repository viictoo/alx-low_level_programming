#include "function_pointers.h"

/**
  * print_name- A function that prints a name
  * @name: pointer to string name
  * @f: pointer to function
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
