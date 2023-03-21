#include "main.h"

/**
 * print_alphabet_x10:- prints lowercase alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	putchar('\n');
	}
}
