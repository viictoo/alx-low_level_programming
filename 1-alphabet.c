#include "main.h"

/**
 * print_alphabet:-prints lowercase alphabet letters
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
