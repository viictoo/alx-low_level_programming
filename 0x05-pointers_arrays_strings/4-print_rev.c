#include "main.h"

/**
  * print_rev-A function that prints a string in reverse
  * @s: output string
  * Return: (void)
  */

void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = len-1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

