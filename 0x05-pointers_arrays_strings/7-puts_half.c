#include "main.h"

/**
  * puts_half-A function that prints the second half of the string
  * @str: input string
  * Return: (void)
  */

void puts_half(char *str)
{
	int len, i, half;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
	}
	else
		half = len / 2;

	for (i = half; i < len; i++)
	{
		_putchar(*(str + i))
	}
	_putchar('\n');
}
