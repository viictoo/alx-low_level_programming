#include "main.h"

/**
 * _print_rev_recursion-A function that prints string in reverse
 * @s: string to be printed to stdio
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_puts_rev_recursion(s + 1);
	_putchar(*s);
	}
}
